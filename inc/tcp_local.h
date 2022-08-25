#if !defined(MACRO_TCP_LOCAL_H)
#define MACRO_TCP_LOCAL_H

#include "api.h"

void login(string, string, string, string);
void userLogin(string, string , string, string);



void login(string username, string password, string ip, string port){

    userLogin(username, password, ip, port);
    if(l==loginSuccess){
        cout<<"Login Success"<<endl;
        if(f==user){
            cout<<"Welcome User"<<endl;
        }
        else if(f==admin){
            cout<<"Welcome Admin"<<endl;
        }
    }
    else if(l==loginFailed){
        
        cout<<"Login Failed"<<endl;
        if(l== userNameIncorrect){
            cout<<"Invalid username"<<endl;
        }
        else if(l==passwordIncorrect){
            cout<<"Invalid password"<<endl;
        }
        else if(l==portIncorrect){
            cout<<"Invalid port"<<endl;
        }
        else if(l==ipIncorrect){
            cout<<"Invalid ip"<<endl;
        }

        f = ForceExit;
    }
       
}


#endif // MACRO
