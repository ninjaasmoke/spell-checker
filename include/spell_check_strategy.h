// spell_check_strategy.h : Nithin Sai
// desc : Header file for spell_check_strategy.cpp

#ifndef SPELL_CHECK_STRATEGY_H
#define SPELL_CHECK_STRATEGY_H

#pragma once
#include <string>

class SpellCheckStrategy
{
public:
    virtual bool isSpelledCorrectly(const std::string &word) const = 0;
    virtual ~SpellCheckStrategy() = default;
};

#endif // !SPELL_CHECK_STRATEGY_H