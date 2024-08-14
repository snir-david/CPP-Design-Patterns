//
// Created by SnirN on 8/14/2024.
//

#ifndef DESIGNPATTERNS_LOGGERFACTORY_HPP
#define DESIGNPATTERNS_LOGGERFACTORY_HPP

#include "Logger.hpp"
#include <memory>

class LoggerFactory {
public:
    virtual std::unique_ptr<Logger> createLogger() = 0;
    virtual ~LoggerFactory() = default;
};

class FileLoggerFactory : public LoggerFactory {
public:
    std::unique_ptr<Logger> createLogger() override { return std::make_unique<FileLogger>(); }
};

class DatabaseLoggerFactory : public LoggerFactory {
public:
    std::unique_ptr<Logger> createLogger() override { return std::make_unique<DatabaseLogger>(); }
};

//LoggerFactory* factory = new FileLoggerFactory();
//std::unique_ptr<Logger> logger = factory->createLogger();
//logger->log("This is a log message.");

#endif//DESIGNPATTERNS_LOGGERFACTORY_HPP
