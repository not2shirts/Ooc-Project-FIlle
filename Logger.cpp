#ifndef LOGGER_H
#define  LOGGER_H

#include <iostream>
#include <fstream>
#include <string>
#include "Timer.h"
using namespace  std;
class Logger {
public:
    enum class Level { INFO, WARN, ERROR };
    

    Logger() {

        long    size_file  =  getFileSize();
       // cout<<"The  File this is  curren t oprn "<<size_file<<endl;
        if(size_file > max_size) {
            //cout<<"Changin  the  mocde too get  "<<endl;
            log_file.open("log.txt",ios::out);
        }
        else {
        log_file.open("log.txt", std::ios::app);
    } // Append to the log file
        if (!log_file.is_open()) {
            std::cerr << "Failed to open log file!" << std::endl;
        }
    }

    ~Logger() {
        if (log_file.is_open()) {
            log_file.close();
        }
    }

    void log(const std::string& message, Level level) {
        std::string log_level_str;
        switch (level) {
            case Level::INFO:    log_level_str = "[INFO]"; break;
            case Level::WARN: log_level_str = "[WARN]"; break;
            case Level::ERROR:   log_level_str = "[ERROR]"; break;
        }

        std::string timestamp = timer.current_Time();
        
        
        std::string log_message = "["+timestamp + "] " + log_level_str + " " + message + "\n";

        // Output to console
        std::cout << log_message;

        // Output to file if open
        if (log_file.is_open()) {
            log_file << log_message;
        }
    }

    void info(const std::string& message) { log(message, Level::INFO); }
    void warn(const std::string& message) { log(message, Level::WARN); }
    void error(const std::string& message) { log(message, Level::ERROR); }

    long getFileSize() {
        std::fstream file("log.txt", std::ios::in); // Open in binary mode

        if (!file) {
            std::cerr << "Unable to open file: "  << std::endl;
            return -1; // Indicate failure
        }

        // Move the cursor to the end of the file
        file.seekg(0, std::ios::end);
        long size = file.tellg(); // Get the current position, which is the size

        file.close(); // Close the file
        return size; // Return the size of the file
}

private:
    std::fstream log_file;
    Timer  timer;
   long  max_size = 1048576;
};

#endif