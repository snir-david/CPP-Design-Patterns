//
// Created by SnirN on 8/14/2024.
//

#ifndef DESIGNPATTERNS_LOGGER_HPP
#define DESIGNPATTERNS_LOGGER_HPP
#include <iostream>
class Logger {
public:
    virtual void log(const std::string &message) = 0;
    virtual ~Logger() = default;
};

class FileLogger : public Logger {
public:
    void log(const std::string &message) override {
        // Log to a file
    }
};

class DatabaseLogger : public Logger {
public:
    void log(const std::string &message) override {
        // Log to a database
    }
};

#endif//DESIGNPATTERNS_LOGGER_HPP
