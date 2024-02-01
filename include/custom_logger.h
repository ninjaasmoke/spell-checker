// custom_logger.h : Nithin Sai
// desc : Header file describing custom logger class

#ifndef CUSTOM_LOGGER_H
#define CUSTOM_LOGGER_H

#pragma once

#include <iostream>
#include <string>

class CustomLogger
{
public:
    static void log(const std::string &message);
    static void logHighlighted(const std::string &message);
};

#endif // CUSTOM_LOGGER_H