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
    mutable Trie dictionaryTrie;

public:
    TrieSpellChecker();
    ~TrieSpellChecker();

    bool isSpelledCorrectly(const std::string &word, const std::vector<std::string> &dictionary, int maxDistance) const override;
};

#endif // TRIE_SPELL_CHECKER_H
