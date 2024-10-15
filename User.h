#ifndef User_H 
#define  User_H
#include<iostream>
#include<string>
#include<vector>


using  namespace   std;
class  User{
    private :
    string  username;
    string password;    
    //vector<User> user_detail;
   

    public  :
    User(string user  ,  string pass) {
        username   =  user;
        password    = pass;
    }
    string  get_username() { return  username;}
    string  get_password() {return  password;}

    //add  the  user
    
    
};


#endif