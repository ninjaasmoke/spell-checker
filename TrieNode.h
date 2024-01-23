#ifndef TRIENODE_H
#define TRIENODE_H

#include <unordered_map>

class TrieNode
{
public:
    std::unordered_map<char, TrieNode *> children;
    bool isEndOfWord;
    TrieNode() : isEndOfWord(false) {}
};

#endif // TRIENODE_H