#ifndef FINAL_SERVICE_H
#define FINAL_SERVICE_H

#include <iostream>
#include <string>
#include "Token.h"
#include "Timer.h"
//#include "File.h"  // Assuming File.h contains the definition for the File class
//#include "Token_service.h"

class Service {
   // File file;  // File object to handle file operations
   //Test  token_service;
   Timer  time;

public:
    // Encrypt function
    bool Encrypt(std::string user, std::string receiver, std::string input_file_path, 
                 std::string expiration_time, std::string output_file_path) {
        std::cout << "Encrypting file for user: " << user << std::endl;
        Token  token(user,receiver, time.current_Time(),expiration_time,".txt");
        // string  s   = time.current_Time();
        // cout<<s<<endl;
        // cout<<  "tHE   cURRENT  TIME is   "<<time.current_Time()<<endl;

        // cout<<"CALLING  FOR  THE COMPARE  OF  THE   TIMERS "<<time.compareDates("10 18 15:10:36 2024");
        // File operations for encryption would go here
        /*
        
        string  encrypted_token  =   token_service.genrate_Token(token);
        return   file.encrypt_file(input_file_path,output_file_path,e_token);
        */
        return true;
    }

    // Decrypt function
    bool Decrypt(std::string user, std::string sender, std::string input_file_path, 
                 std::string output_file_path) {
        std::cout << "Decrypting file for user: " << user << std::endl;
        // File operations for decryption would go here

        //  return   file.decrypt_file(input_file_path,  output_file_path);
        return true;
    }
};

#endif // FINAL_SERVICE_H
