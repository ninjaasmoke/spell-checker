// trie_node.cpp : nithin sai
// desc : a trie node implementation

#include "../include/trie_node.h"

TrieNode::TrieNode() : endOfWord(false) {}

TrieNode::~TrieNode()
{
    for (auto &pair : children)
    {
        delete pair.second;
    }
}

bool TrieNode::hasChild(char c) const
{
    return children.find(c) != children.end();
}

TrieNode *TrieNode::getChild(char c) const
{
    auto it = children.find(c);
    return (it != children.end()) ? it->second : nullptr;
}

void TrieNode::addChild(char c)
{
    children[c] = new TrieNode();
}

void TrieNode::setEndOfWord(bool isEnd)
{
    endOfWord = isEnd;
}

bool TrieNode::isEndOfWord() const
{
    return endOfWord;
}

const std::unordered_map<char, TrieNode *> &TrieNode::getChildren() const
{
    return children;
}