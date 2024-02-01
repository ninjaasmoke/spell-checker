// levenshtein.cpp : Nithin Sai
// desc : Implementation file for levenshtein.h

#include "../include/levenshtein.h"

int min(int a, int b, int c)
{
    return std::min(std::min(a, b), c);
}

int LevenshteinDistance::calculate(const std::string &str1, const std::string &str2)
{
    const int len1 = str1.length();
    const int len2 = str2.length();

    int distances[len1 + 1][len2 + 1];

    for (int i = 0; i <= len1; ++i)
    {
        for (int j = 0; j <= len2; ++j)
        {
            if (i == 0)
                distances[i][j] = j;
            else if (j == 0)
                distances[i][j] = i;
            else if (str1[i - 1] == str2[j - 1])
                distances[i][j] = distances[i - 1][j - 1];
            else
                distances[i][j] = 1 + min(distances[i - 1][j], distances[i][j - 1], distances[i - 1][j - 1]);
        }
    }

    return distances[len1][len2];
}