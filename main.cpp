// main.cpp : Nithin Sai
// desc : main spell checker program using strategy pattern

#include <iostream>
#include <algorithm>
#include <sstream>
#include <vector>
#include <string>
#include <chrono>

#include "./include/file_io.h"
#include "./include/spell_check_strategy.h"
#include "./include/levenshtein_spell_checker.h"

// Function to convert a string to lowercase
std::string toLowercase(const std::string &s)
{
    std::string result = s;
    std::transform(result.begin(), result.end(), result.begin(), ::tolower);
    return result;
}

/**
 * @brief Main function to demonstrate the spell checker using the strategy pattern
 */
int main()
{
    /*
    Start the timer
    */
    auto start = std::chrono::high_resolution_clock::now();

    // File paths
    const std::string dictionaryFile = "data/dictionary.txt";
    const std::string inputFile = "data/sample.txt";
    const std::string outputFile = "fixed.txt";

    // Read dictionary into a vector for lookup
    std::vector<std::string> dictionary = FileIO::readLines(dictionaryFile);

    // Instantiate the Levenshtein spell checker (initial strategy)
    LevenshteinSpellChecker levenshteinSpellChecker;
    SpellCheckStrategy *currentStrategy = &levenshteinSpellChecker;

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

            // Convert both cleaned word and dictionary words to lowercase
            std::string cleanedLower = toLowercase(cleanedWord);
            std::transform(dictionary.begin(), dictionary.end(), dictionary.begin(), ::toLowercase);

            // Check if the word is spelled correctly using the current strategy
            if (!currentStrategy->isSpelledCorrectly(cleanedLower, dictionary, 0))
            {
                // Implement suggestions for corrections here: TODO
                // Now, just marking the incorrect word with square brackets
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

    /*
    Stop the timer
    */
   
    auto stop = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);

    std::cout << "Runtime: " << duration.count() << " microseconds" << std::endl;

    return 0;
}
