// trie.h

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

private:
    TrieNode *root;
};

#endif // TRIE_H