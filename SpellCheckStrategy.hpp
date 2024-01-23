#ifndef SPELLCHECKSTRATEGY_H
#define SPELLCHECKSTRATEGY_H

#include <string>
#include <unordered_set>

class SpellCheckStrategy
{
public:
    virtual ~SpellCheckStrategy() = default;
    virtual bool isWordCorrect(const std::string &word, const std::unordered_set<std::string> &dictionary) const = 0;
};

#endif // SPELLCHECKSTRATEGY_H