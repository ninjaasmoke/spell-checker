// trie_spell_checker.cpp : nithin sai
// desc : a trie spell checker implementation

#include "../include/trie_spell_checker.h"
#include "../include/levenshtein.h"

#include <algorithm>
#include <string>

TrieSpellChecker::TrieSpellChecker() {}

TrieSpellChecker::~TrieSpellChecker() {}

bool TrieSpellChecker::isSpelledCorrectly(const std::string &word, const std::vector<std::string> &dictionary, int threshold) const
{

    for (const std::string &dictWord : dictionary)
    {
        dictionaryTrie.insert(dictWord);
    }

    return dictionaryTrie.searchWithinDistance(word, threshold);
}