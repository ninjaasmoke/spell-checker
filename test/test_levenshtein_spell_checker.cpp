// test_levenshtein_spell_checker.cpp : Nithin Sai
// desc : tests for levenshtein_spell_checker.cpp

#include <iostream>
#include "../include/levenshtein_spell_checker.h"

int main()
{
    LevenshteinSpellChecker spellChecker;

    std::string testWord = "exampli";
    bool isCorrect = spellChecker.isSpelledCorrectly(testWord);

    if (isCorrect)
    {
        std::cout << "The word '" << testWord << "' is spelled correctly." << std::endl;
    }
    else
    {
        std::cout << "The word '" << testWord << "' is misspelled." << std::endl;
    }

    return 0;
}