// levenshtein_spell_checker.cpp : Nithin Sai
// desc : Implementation file for levenshtein_spell_checker.h

#include "../include/levenshtein_spell_checker.h"
#include "../include/levenshtein.h"

bool LevenshteinSpellChecker::isSpelledCorrectly(const std::string &word, int threshold) const
{
    LevenshteinDistance levenshtein;
    for (auto &dictWord : dictionary)
    {
        if (levenshtein.calculate(word, dictWord) <= threshold)
        {
            return true;
        }
    }

    return false;
}
