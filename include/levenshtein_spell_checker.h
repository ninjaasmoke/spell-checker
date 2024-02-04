// levenshtein_spell_checker.h : Nithin Sai
// desc : Header file for levenshtein_spell_checker.cpp

#ifndef LEVENSHTEIN_SPELL_CHECKER_H
#define LEVENSHTEIN_SPELL_CHECKER_H

#include <string>
#include <vector>

#include "spell_check_strategy.h"
#include "levenshtein.h"

class LevenshteinSpellChecker : public SpellCheckStrategy
{
private:
    LevenshteinDistance levenshtein;

public:
    using SpellCheckStrategy::SpellCheckStrategy;
    bool isSpelledCorrectly(const std::string &word, int threshold) const override;
};

#endif // !LEVENSHTEIN_SPELL_CHECKER_H