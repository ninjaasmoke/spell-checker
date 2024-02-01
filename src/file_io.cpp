// file_io.cpp : Nithin Sai
// desc : implementation of file input/output operations

#include "../include/file_io.h"
#include <fstream>
#include <iostream>

std::vector<std::string> FileIO::readLines(const std::string &filename)
{
    std::vector<std::string> lines;
    std::ifstream file(filename);

    if (file.is_open())
    {
        std::string line;
        while (std::getline(file, line))
        {
            lines.push_back(line);
        }
        file.close();
    }
    else
    {
        std::cerr << "Unable to open file: " << filename << std::endl;
    }

    return lines;
}

bool FileIO::writeLines(const std::string &filename, const std::vector<std::string> &lines)
{
    std::ofstream file(filename);

    if (file.is_open())
    {
        for (const auto &line : lines)
        {
            file << line << '\n';
        }
        file.close();
        return true;
    }
    else
    {
        std::cerr << "Error opening file for writing: " << filename << std::endl;
        return false;
    }
}