// test_trie_spell_checker.cpp : nithin
// desc : tests for trie_spell_checker.cpp

#include <iostream>
#include "../include/trie_spell_checker.h"

int main()
{
    TrieSpellChecker trieSpellChecker;

    // sample dictionary for testing
    std::vector<std::string> dictionary = {"example", "correct", "spelling", "checker", "test"};

    // test words
    std::vector<std::string> testWords = {"exampli", "correkt", "speling", "cheker", "tes"};

    for (const auto &testWord : testWords)
    {
        bool isCorrect = trieSpellChecker.isSpelledCorrectly(testWord, dictionary, 2);

        if (isCorrect)
        {
            std::cout << "The word '" << testWord << "' is spelled correctly." << std::endl;
        }
        else
        {
            std::cout << "The word '" << testWord << "' is misspelled." << std::endl;
        }
    }

    return 0;
}
