// test_spell_check_strategy.cpp : Nithin Sai
// desc : tests for spell_check_strategy.cpp

#include <iostream>
#include "../include/spell_check_strategy.h"

class DummySpellCheckStrategy : public SpellCheckStrategy
{
public:
    bool isSpelledCorrectly(const std::string &word) const override
    {
        return true;
    }
};

int main()
{
    DummySpellCheckStrategy dummyStrategy;

    std::string testWord = "example";
    bool isCorrect = dummyStrategy.isSpelledCorrectly(testWord);

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