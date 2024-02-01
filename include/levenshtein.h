// levenshtein.h : Nithin Sai
// desc : Header file for levenshtein.cpp

#ifndef LEVENSHTEIN_H
#define LEVENSHTEIN_H

#pragma once

#include <string>
class LevenshteinDistance {
public:
    static int calculate(const std::string& s1, const std::string& s2);
};

#endif // LEVENSHTEIN_H