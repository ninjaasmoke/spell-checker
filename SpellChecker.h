#ifndef SPELLCHECKER_H
#define SPELLCHECKER_H

#include <string>
#include <vector>
#include "SpellCheckStrategy.h"
#include "Trie.h"

class SpellChecker
{
public:
    SpellChecker(const std::string &dictionaryFilePath, SpellCheckStrategy *strategy);
    ~SpellChecker();

    void loadDictionary();
    void setStrategy(SpellCheckStrategy *strategy);
    void loadText(const std::string &textFilePath);
    void performSpellCheck();
    void saveText(const std::string &textFilePath);

private:
    Trie dictionaryTrie;
    std::vector<std::string> text;
    SpellCheckStrategy *strategy;
};

#endif // SPELLCHECKER_H