// levenshtein_spell_checker.cpp : Nithin Sai
// desc : Implementation file for levenshtein_spell_checker.h

#include "../include/levenshtein_spell_checker.h"
#include "../include/levenshtein.h"

bool LevenshteinSpellChecker::isSpelledCorrectly(const std::string &word) const
{
    LevenshteinDistance levenshtein;
    return levenshtein.calculate(word, "example") == 0;
}