//hello world cpp

#include "inc/tcp_local.h"

static bool connec = false; //flag for connection

int userShow();
void login(string, string,string, string);

int main(int argc, char **argv)
{   
    if(argc!=5){
        cout<<"Usage: ./CQD_DB <username> <password> <ip> <port>"<<endl;
        return 0;
    }
    string username = argv[1];
    string password = argv[2];
    string ip = argv[3];
    string port = argv[4];

    cout << "Welcome to the Employee Management System" << endl;
    login(username,password,ip,port);
    
    while(true){
        
        if(f == ForceExit){
            cout << "Thank you for using our system ! " << endl;
            return 0;
        }
        else{
            int choice = userShow();
            userFunctions(choice);
        }
    
    }
    return 0;
}
