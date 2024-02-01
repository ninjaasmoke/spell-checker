// test_file_io.cpp : Nithin Sai
// desc : unit tests for file input/output operations

#include "../include/file_io.h"
#include <iostream>

int main()
{
    std::string inputFile = "data/sample.txt";
    std::string outputFile = "fixed.txt";

    // Read lines from the input file
    std::vector<std::string> lines = FileIO::readLines(inputFile);

    // Modify lines
    for (auto &line : lines)
    {
        line += " (modified)";
    }

    // Write modified lines to the output file
    bool writeSuccess = FileIO::writeLines(outputFile, lines);

    if (writeSuccess)
    {
        std::cout << "File successfully written to: " << outputFile << std::endl;
    }
    else
    {
        std::cout << "Error writing to file." << std::endl;
    }

    return 0;
}