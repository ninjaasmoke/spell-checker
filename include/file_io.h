// file_io.h : Nithin Sai
// desc : Header file describing file input/output operations

#ifndef FILE_IO_H
#define FILE_IO_H

#include <string>
#include <vector>

class FileIO
{
public:
    static std::vector<std::string> readLines(const std::string &filename);
    static bool writeLines(const std::string &filename, const std::vector<std::string> &lines);
};

#endif // !FILE_IO_H