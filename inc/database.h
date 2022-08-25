#if !defined(MACRO_DATABASE_h)
#define MACRO_DATABASE_h

#include <vector>
#include <string>
#include <iostream>
using namespace std;

/*                   BASIC STRUCTURE OF THE DATABASE  

    Used enums  :   {flags, login, Conferance_Type, Transport, Connectivity_Ice}
    Used Structs:   {s_Date, s_UserAgent, s_Network}
    Used Classes:   {c_Date, c_UserAgent, c_Network}

    INHERITANCE : Multiple Inheritance

*/

enum flags{ user, admin, ForceExit };                            //flags for user and admin 
enum login{ userNameIncorrect, passwordIncorrect, loginSuccess ,
 loginFailed, ipIncorrect, portIncorrect };                      //flags for login
enum Conference_Type{ applicationsharing, audio, video, focus }; //flags for conference type : 
enum Transport { UDP, TCP, Unrecognized };                       //flags for transport
enum Connectivity_Ice {Direct, Relayed, HTTTP, Failed };         //flags for connectivity ice

flags f ; login l;   //flags and login for user and admin

struct s_Date {
    string End_Time;       //End time of the call
    int Year;              //Year of the call
    int Month;             //Month of the call
    int Day;               //Day of the call
    string Date;           //Date of the call
    int Hour;
    int Minute;            //Minute of the call
    int Second;
    int Day_Of_Year;       //Day of the year of the call
    string Day_Of_Week;    //Day of the week of the call
    int Day_Number_Of_Week;//Day number of the week of the call
    string Week;           

};

struct s_UserAgent{

    string First_Domain;                  //Domain of the first endpoint's user. Example value: contoso.com
    string Second_Domain;                 //Domain of the second endpoint's user. Example value: contoso.com
    string First_User_Agent_Category;     //Category of the user agent of the first endpoint. Example value: OC
    string Second_User_Agent_Category;    //Category of the user agent of the second endpoint. Example value: OC
    string First_User_Agent;              //User agent of the first endpoint. Example value: OC/1.0.0
    string Second_User_Agent;             //User agent of the second endpoint. Example value: OC/1.0.0
    Conference_Type conferance_type;      //Conference type of the call. Example value: audio
    string Conference_ID;                 //Conference ID of the call. Example value: 12345

};

struct s_Network {

    Transport transport;                           //Transport of the call. Example value: UDP
    Connectivity_Ice first_connectivity_ice;       //Connectivity of the first endpoint. Example value: Direct
    Connectivity_Ice second_connectivity_ice;      //Connectivity of the second endpoint. Example value: Direct
    string First_IP_Address;                       //IP address of the first endpoint. Example value: 192.168.1.1
    string Second_IP_Address;                      //IP address of the second endpoint. Example value:
    int First_Link_Speed;                          //Link speed of the first endpoint. Example value: 100
    int Second_Link_Speed;                         //Link speed of the second endpoint. Example value: 100
    int First_Port;                                //Port of the first endpoint. Example value: 5060
    int Second_Port;                               //Port of the second endpoint. Example value: 5060

};



class c_Network{
private:
       s_Network network;
public:
    c_Network(){}
    c_Network(Transport, Connectivity_Ice, Connectivity_Ice, string, string, int, int, int, int);

    //setter functions
    void setTransport(Transport);


    //getter functions
    Transport getTransport();


    //member functions


    //destructor
    ~c_Network(){}           
};

class c_UserAgent{
private:
    s_UserAgent userAgent;
public:
    c_UserAgent(){}
    c_UserAgent(string, string, string, string, string, string, string, string, Conference_Type, string);
    
    //setter functions
    void setFirstDomain(string);

    //getter functions
    string getFirstDomain();
    

    //member functions


    //destructor
    ~c_UserAgent(){}
};    


class c_Date{

private:
    s_Date date;

public:
    c_Date(){}
    c_Date(string, int, int, int, string, int, int, int, int, string, int, string, int);
    
    //setter functions
    void setEndTime(string);
    
    
    //getter functions
    string getEndTime();

    
    //member functions
    

    //destructor
    ~c_Date(){}
};

// ---------------------------- Multiple Inheritance ----------------------------

//implimented multiple inheriteace b/w c_Date and c_UserAgent and c_Network
class c_Database : public c_Date, public c_UserAgent, public c_Network{
private:
    c_Date date;                 //class of date details
    c_UserAgent userAgent;       //class of user Useragent details
    c_Network network;           //class of network details
public:
    c_Database(){}
    c_Database(c_Date d, c_UserAgent ua, c_Network n){
        date = d; userAgent = ua; network = n;
    }

    //setter functions
    void setDate(c_Date);
    void setUserAgent(c_UserAgent);
    void setNetwork(c_Network);

    //getter functions
    c_Date getDate();
    c_UserAgent getUserAgent();
    c_Network getNetwork();

    //member functions
    void addToDatabase();
    void displayDatabase();
    void deleteFromDatabase();
    void searchDatabase();
    void updateDatabase();

    //destructor
    ~c_Database(){}

} c_db;

vector <c_Database> database;

void c_Database :: addToDatabase(){
    //create object of c_Date class, c_UserAgent class and c_Network class & add them to the database
    // c_Date d("sample",1,1,1,"sample",1,1,1,1,"string",1,"sample",1);
    // c_Network n(Transport::UDP, Connectivity_Ice::Direct, Connectivity_Ice::Direct, "sample", "sample",  1, 1,  1, 1);
    // c_UserAgent u("sample", "sample", "sample", "sample",  "sample",  "sample",  "sample",  "sample",  audio,  "sample");

    // c_Database c_db(d, u, n);
    // database.push_back(c_db);
    cout<<"Add Called : "<<endl;
}

void c_Database :: displayDatabase(){
    //display rowwise the c_Data 
    cout<<"Data of c_Date Class"<<endl;
    cout<<"End Time : "<<"Year : "<<"Month : "<<"Day : "<<"Date : "<<"Hour : "<<"Minute : "<<"Second : "<<"Day of Year : "<<"Day of Week : "<<"Day Number of Week : "<<"Week : "<<endl;
    for(int i=0; i<database.size(); i++){
       // cout<<database[i].getDate().End_Time<<" "<<database[i].getDate().Year<<" "<<database[i].getDate().Month<<" "<<database[i].getDate().Day<<" "<<database[i].getDate().Date<<" "<<database[i].getDate().Hour<<" "<<database[i].getDate().Minute<<" "<<database[i].getDate().Second<<" "<<database[i].getDate().Day_Of_Year<<" "<<database[i].getDate().Day_Of_Week<<" "<<database[i].getDate().Day_Number_Of_Week<<" "<<database[i].getDate().Week<<endl;
    }

    cout<<"Data of c_UserAgent Class"<<endl;
    cout<<"First Domain : "<<"Second Domain : "<<"First User Agent Category : "<<"Second User Agent Category : "<<"First User Agent : "<<"Second User Agent : "<<"Conference Type : "<<"Conference ID : "<<endl;
    for(int i=0; i<database.size(); i++){
       // cout<<database[i].getUserAgent().First_Domain<<" "<<database[i].getUserAgent().Second_Domain<<" "<<database[i].getUserAgent().First_User_Agent_Category<<" "<<database[i].getUserAgent().Second_User_Agent_Category<<" "<<database[i].getUserAgent().First_User_Agent<<" "<<database[i].getUserAgent().Second_User_Agent<<" "<<database[i].getUserAgent().conferance_type<<" "<<database[i].getUserAgent().Conference_ID<<endl;
    }

    cout<<"Data of c_Network Class"<<endl;
    cout<<"Transport : "<<"First Connectivity : "<<"Second Connectivity : "<<"First IP Address : "<<"Second IP Address : "<<"First Link Speed : "<<"Second Link Speed : "<<"First Port : "<<"Second Port : "<<endl;
    for(int i=0; i<database.size(); i++){
       // cout<<database[i].getNetwork().Transport<<" "<<database[i].getNetwork().First_Connectivity<<" "<<database[i].getNetwork().Second_Connectivity<<" "<<database[i].getNetwork().First_IP_Address<<" "<<database[i].getNetwork().Second_IP_Address<<" "<<database[i].getNetwork().First_Link_Speed<<" "<<database[i].getNetwork().Second_Link_Speed<<" "<<database[i].getNetwork().First_Port<<" "<<database[i].getNetwork().Second_Port<<endl;
    }        
}

void c_Database :: deleteFromDatabase(){
    //delete the data from the database
    if(f == user ){
        cout<<"You are not authorized to delete data from the database"<<endl;
        f = ForceExit;
    }
    else{
        // cout<<"Enter the index of the data you want to delete"<<endl;
        // int index;
        // cin>>index;
        // database.erase(database.begin()+index);
    }
}

void c_Database :: updateDatabase(){
    //update the data in the database
    if(f == user ){
        cout<<"You are not authorized to update data in the database"<<endl;
        f = ForceExit;
    }
    else{
        // cout<<"Enter the index of the data you want to update"<<endl;
        // int index;
        // cin>>index;
        // cout<<"Enter the new data"<<endl;
        // c_Database c_db;
        // database.insert(database.begin()+index, c_db);
    }
}
#endif // MACRO_DATABASE_h
