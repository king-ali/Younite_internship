#if !defined(MACRO_API_H)
#define MACRO_API_H
#include "database.h"

int userShow();
void userFunctions(int);
void userLogin(string, string, string, string);

void userLogin(string username, string password, string ip, string port){

    if(username == "user" && password == "user" && ip == "localhost" && port == "8080"){
        f = user;
        l = loginSuccess;
    }
    else if(username == "admin" && password == "admin" && ip == "localhost" && port == "8080"){
        f = admin;
        l = loginSuccess;
    }
    else{
        //cout << "Invalid username or password" << endl;
        l = loginFailed;
    }
}

int userShow(){
    //show user options
    cout<<"1. Add  \n2. Delete  \n3. Update  \n4. Show  \n5. Exit"<<endl;
    
    cout << "Enter your choice: ";
    int choice;
    cin >> choice;
    cout << endl;

    return choice;
}

void userFunctions(int choice){
    //switch b/w choices class functions Employee
    switch(choice){
        case 1:
            c_db.addToDatabase();
            break;
        case 2:
            c_db.deleteFromDatabase();
            break;
        case 3:
            c_db.updateDatabase();
            break;
        case 4:
            c_db.displayDatabase();
            break;
        case 5:
            f = ForceExit;
            break;
        default:
            cout<<"Invalid Choice"<<endl;
            break;
    }
}

/*
static int userConn = 0, adminConn = 0; //flag for connection
//enum for user admin and exit

int userFunctions(int choice){
    switch(choice){
        case 1:
            //addEmployee();
            classEmp.addEmployee();
            break;
        case 2:
           // showEmployee();
           //showEmployee();
            break;
        case 3:
            if(userConn == 1){
                userConn = 0;
            }
            cout << "Thank you for using our system" << endl;
            return -1;
            break;
        default:
            cout << "Invalid choice" << endl;
            break;
    }
    return 0;
}

int adminFunctions(int choice){

    //switch case for user choice
    switch(choice){
        case 1:
            //addEmployee();    
            break;
        case 2:
            static int id; cout<<"Enter id : "; cin>>id;
            //deleteEmployee(id);
            break;
        case 3:
            cout<<"Enter id : "; cin>>id;
            //updateEmployee(id);
            break;
        case 4:
            //showEmployee();    
            break;
        case 5:
            if(adminConn == 1){
                adminConn = 0;
            }
            cout << "Thank you for using our system" << endl;
            return -1;
            break;
        default:
            cout << "Invalid choice" << endl;
            break;
    }

    return 0;
}
*/

#endif // _AP

