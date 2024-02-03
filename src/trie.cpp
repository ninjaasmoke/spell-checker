// trie.cpp : nithin sai
// desc : a trie implementation

#include "../include/trie.h"

#include <queue>

Trie::Trie() : root(new TrieNode()) {}

Trie::~Trie()
{
    delete root;
}

void Trie::insert(const std::string &word)
{
    TrieNode *current = root;

    for (char c : word)
    {
        if (!current->hasChild(c))
        {
            current->addChild(c);
        }

        current = current->getChild(c);
    }

    current->setEndOfWord(true);
}

bool Trie::search(const std::string &word) const
{
    TrieNode *current = root;

    for (char c : word)
    {
        if (!current->hasChild(c))
        {
            return false;
        }

        current = current->getChild(c);
    }

    return current->isEndOfWord();
}

bool Trie::searchWithinDistance(const std::string &word, int maxDistance) const
{
    return searchWithinDistanceHelper(root, word, maxDistance, 0, 0);
}

bool Trie::searchWithinDistanceHelper(const TrieNode *node, const std::string &word, int maxDistance, int depth, int cost) const
{
    if (cost > maxDistance)
    {
        return false;
    }

    if (depth == word.length())
    {
        return node->isEndOfWord();
    }

    for (const auto &pair : node->getChildren())
    {
        char c = pair.first;
        const TrieNode *child = pair.second;

        int newCost = cost;

        if (word[depth] != c)
        {
            newCost++;
        }

        if (searchWithinDistanceHelper(child, word, maxDistance, depth + 1, newCost))
        {
            return true;
        }
    }

    return false;
}
