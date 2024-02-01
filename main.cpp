// main.cpp : Nithin Sai
// desc : main spell checker program using strategy pattern

#include <iostream>
#include <algorithm>
#include <sstream>
#include <vector>
#include <string>

#include "./include/file_io.h"
#include "./include/levenshtein_spell_checker.h"

int main()
{
    // File paths
    const std::string dictionaryFile = "data/dictionary.txt";
    const std::string inputFile = "data/sample.txt";
    const std::string outputFile = "fixed.txt";

    // Read dictionary into a vector for lookup
    std::vector<std::string> dictionary = FileIO::readLines(dictionaryFile);

    // Instantiate the Levenshtein spell checker
    LevenshteinSpellChecker spellChecker;

    // Read lines from the input file
    std::vector<std::string> lines = FileIO::readLines(inputFile);

    // Correct spellings and update lines
    for (auto &line : lines)
    {
        std::istringstream iss(line);
        std::string word;
        std::ostringstream correctedLine; // New stringstream to store corrected line

        while (iss >> word)
        {
            // Remove punctuation
            std::string cleanedWord = word;
            cleanedWord.erase(std::remove_if(cleanedWord.begin(), cleanedWord.end(), ::ispunct), cleanedWord.end());

            // check if the word is spelled correctly
            if (!spellChecker.isSpelledCorrectly(cleanedWord, dictionary, 0))
            {
                // implement suggestions for corrections here
                // now, just marking the incorrect word with square brackets
                word = "[" + word + "]";
            }

            correctedLine << word << ' '; // Append the word to the corrected line
        }

        line = correctedLine.str(); // Update the original line with the corrected line
    }

    bool writeSuccess = FileIO::writeLines(outputFile, lines);

    if (writeSuccess)
    {
        std::cout << "Spell-checking complete. Corrected file written to: " << outputFile << std::endl;
    }
    else
    {
        std::cerr << "Error writing to file." << std::endl;
    }

    return 0;
}
