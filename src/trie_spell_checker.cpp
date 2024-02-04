// trie_spell_checker.cpp : nithin sai
// desc : a trie spell checker implementation

#include "../include/trie_spell_checker.h"

#include <algorithm>
#include <string>

TrieSpellChecker::TrieSpellChecker(const std::vector<std::string> &dictionary)
    : SpellCheckStrategy(dictionary), dictionaryTrie()
{
    for (auto &word : dictionary)
    {
        dictionaryTrie.insert(word);
    }
}

TrieSpellChecker::~TrieSpellChecker() {}

bool TrieSpellChecker::isSpelledCorrectly(const std::string &word, int threshold) const
{
    return dictionaryTrie.searchWithinDistance(word, threshold);
}