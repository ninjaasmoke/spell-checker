// custom_logger.cpp : Nithin Sai
// desc : Implementation file for a custom logger class that logs messages to the console with highlighting

#include "../include/custom_logger.h"

void CustomLogger::log(const std::string &message)
{
    std::cout << message << std::endl;
}

void CustomLogger::logHighlighted(const std::string &message)
{
    std::string highlightedMessage = "";
    bool inBracket = false;

    for (char c : message)
    {
        if (c == '[')
        {
            inBracket = true;
            highlightedMessage += "\033[1;31m"; // ANSI escape code for red text
        }
        else if (c == ']')
        {
            inBracket = false;
            highlightedMessage += "\033[0m"; // ANSI escape code to reset text color
        }

        highlightedMessage += c;
    }

    std::cout << highlightedMessage << std::endl;
}