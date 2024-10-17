#include "Token.h"
#include "Timer.h"
#include<iostream>
#include<string>


string  Token::genrate_Token() {

   //  Logic  To genrate  the   Token 
   //expirating  time  GIVE  by  user  
   //issuteom  =  genrate  it  from  here 


   string  username_reciver  =  sender+"."+reciver;
   string  time  =  issue_time+"."+expiration_time;

   //i  will  call  the   encprty  Funciton  to  make    Gaurav  

 std::string key = generateRandomBytes(16); // 16 bytes for AES-128
    std::string iv = generateRandomBytes(16);  // 16 bytes IV

   /*
   string  e_username  =  encpty(username_reciver, key , iv );
   string  e_time  =  encyrpt(time, key , iv);
  
   string  final_token  =  e_username+"."+e_token+"."+file_format;
   return  encyrpt(final_token, key , iv);
   */
   
    return  "";
}

bool  Token::validate_Token(string  token ,  string  s) {
    //  Token  revice   Called  me  up 
    //sender  pass  teh   name
   
/*
     size_t first_dot = token.find('.');
    size_t second_dot = token.find('.', first_dot + 1);

    std::string username = decyrpt(token.substr(0, first_dot);)
    std::string time = token.substr(first_dot + 1, second_dot - first_dot - 1);
    std::string fileformat = token.substr(second_dot + 1);
    
    first_dot  =  username.find('.');
    string  sender_sent  = username.substr(0,first_dot); //  the  Person  Who i  want   to  veryfy
    string reciver_sent  =  username.substr(first_dot+1);
    

    
    if(s.veriy()) {
        first_dot  =  time.find('.');
        string expiration  =  time.substr(first_dot+1);
        Timer  time;
        if(time.compareDates(expiration)) {
                return  true;
        }
        else {
            return  false;
        }


    }
    else {
        return  false;
    }

*/
    // If all characters match, return true
    return true;
}
