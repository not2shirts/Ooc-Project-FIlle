#ifndef Timer_h
#define Timer_h

#include <iostream>
#include <iomanip>
#include <ctime>
#include <sstream>
#include <string>
#include<chrono>

// Function to convert date string to time_t
class Timer {
    public  :
    time_t convertToTimeT(const std::string& dateStr) {
        std::tm tm = {};
        std::istringstream ss(dateStr);
        
        // Use std::get_time to parse the date string
        ss >> std::get_time(&tm, "%b %d %H:%M:%S %Y");
        
        if (ss.fail()) {
            throw std::runtime_error("Failed to parse date string");
        }

        return std::mktime(&tm); // Convert tm to time_t
    }

    // Function to compare two date strings
    bool compareDates(const std::string& expiration_time) {
        time_t e_time = convertToTimeT(expiration_time);
       //wev  are   paasin  them   but  we  can   simply  so 
       auto now = std::chrono::system_clock::now();
    
    // Convert it to time_t to output a human-readable time
    std::time_t currentTime = std::chrono::system_clock::to_time_t(now);
    
       if(  (e_time >=  currentTime))  return  true;
       else return  false;
    }
};

#endif