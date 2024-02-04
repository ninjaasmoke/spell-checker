// trie_node.h : nithin sai
// desc : a header for implementation of a trie node

#ifndef TRIE_SPELL_CHECKER_H
#define TRIE_SPELL_CHECKER_H

#include "spell_check_strategy.h"
#include "trie.h"
#include <string>
#include <vector>

class TrieSpellChecker : public SpellCheckStrategy
{
private:
    Trie dictionaryTrie;

public:
    using SpellCheckStrategy::SpellCheckStrategy;

    TrieSpellChecker(const std::vector<std::string> &dictionary);

    ~TrieSpellChecker();

    bool isSpelledCorrectly(const std::string &word, int maxDistance) const override;
};

#endif // TRIE_SPELL_CHECKER_H
