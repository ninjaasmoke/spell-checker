// spell_check_strategy.h : Nithin Sai
// desc : Header file for spell_check_strategy.cpp

#ifndef SPELL_CHECK_STRATEGY_H
#define SPELL_CHECK_STRATEGY_H

#include <string>
#include <vector>

class SpellCheckStrategy
{
protected:
    const std::vector<std::string> &dictionary;

public:
    SpellCheckStrategy(const std::vector<std::string> &dictionary) : dictionary(dictionary) {}
    
    virtual bool isSpelledCorrectly(const std::string &word, int threshold) const = 0;
    virtual ~SpellCheckStrategy() = default;
};

#endif // !SPELL_CHECK_STRATEGY_H