// trie.h : nithin sai
// desc : a header for implementation of a trie

#ifndef TRIE_H
#define TRIE_H

#include "trie_node.h"
#include <string>
#include <vector>

class Trie
{
public:
    Trie();
    ~Trie();

    void insert(const std::string &word);
    bool search(const std::string &word) const;
    bool searchWithinDistance(const std::string &word, int maxDistance) const;

private:
    TrieNode *root;
    bool searchWithinDistanceHelper(const TrieNode *node, const std::string &word, int maxDistance, int depth, int cost) const;
};

#endif // TRIE_H