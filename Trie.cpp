// Trie.cpp : Nithin
// desc : a trie data structure implementation in c++

#include "Trie.h"

Trie::Trie() : root(new TrieNode()) {}

void Trie::insert(const std::string &word)
{
    TrieNode *node = root;
    for (char c : word)
    {
        if (node->children.find(c) == node->children.end())
        {
            node->children[c] = new TrieNode();
        }
        node = node->children[c];
    }
    node->isEndOfWord = true;
}

bool Trie::search(const std::string &word) const
{
    const TrieNode *node = root;
    for (char c : word)
    {
        auto it = node->children.find(c);
        if (it == node->children.end())
        {
            return false;
        }
        node = it->second;
    }
    return node->isEndOfWord;
}