// trie_node.h : nithin sai
// desc : a header for implementation of a trie node

#ifndef TRIE_NODE_H
#define TRIE_NODE_H

#include <unordered_map>

class TrieNode
{
public:
    TrieNode();
    ~TrieNode();

    bool hasChild(char c) const;
    TrieNode *getChild(char c) const;
    void addChild(char c);
    void setEndOfWord(bool isEnd);
    bool isEndOfWord() const;
    const std::unordered_map<char, TrieNode *> &getChildren() const;

private:
    std::unordered_map<char, TrieNode *> children;
    bool endOfWord;
};

#endif // TRIE_NODE_H