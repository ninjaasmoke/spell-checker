// test_levenstein.cpp : Nithin
// desc : tests for levenshtein.cpp

#include <iostream>
#include "../include/levenshtein.h"

int main()
{
    // Test cases
    std::string word1 = "kitten";
    std::string word2 = "sitting";

    int distance = LevenshteinDistance::calculate(word1, word2);

    std::cout << "Levenshtein Distance between '" << word1 << "' and '" << word2 << "': " << distance << std::endl;

    return 0;
}