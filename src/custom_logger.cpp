// custom_logger.cpp : Nithin Sai
// desc : Implementation file for a custom logger class that logs messages to the console with highlighting

#include "../include/custom_logger.h"

void CustomLogger::log(const std::string &message)
{
    std::cout << message << " ";
}

void CustomLogger::logHighlighted(const std::string &message)
{
    std::cout << "\033[1;31m" << message << "\033[0m"
              << " ";
}

void CustomLogger::logNewLine()
{
    std::cout << std::endl;
}