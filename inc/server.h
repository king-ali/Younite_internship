#if !defined(MACRO_SERVER_H)
#define MACRO_SERVER_H
#include "database.h"



struct CallDetails{

    string callID;
    string callDate;
    string callTime;
    float callDuration;
};

class CallDataBase {

private:
    CallDetails callDetails;
public:
    CallDataBase();
    CallDataBase(string , string , string , float );

    void setCallDetails(string , string , string , float );
    void setCallID(string);
    void setCallDate(string);
    void setCallTime(string);
    void setCallDuration(float);

    string getCallID();
    string getCallDate();
    string getCallTime();
    float getCallDuration();

    void addCallDetails();
    void deleteCallDetails();
    void updateCallDetails();
    void showCallDetails();
    ~CallDataBase(){}
   
} callDB;

class CallLog : public CallDataBase{
private: 
    string callType;
public:
    CallLog();
    CallLog(string);

    void setCallType(string);
    string getCallType();
    ~CallLog(){}

};      

//vector list for storing employee details
vector<CallLog> callList;


//define the functions of CallDataBase
CallDataBase::CallDataBase(){
    callDetails.callID = "";
    callDetails.callDate = "";
    callDetails.callTime = "";
    callDetails.callDuration = 0;
}

CallDataBase::CallDataBase(string callID, string callDate, string callTime, float callDuration){
    callDetails.callID = callID;
    callDetails.callDate = callDate;
    callDetails.callTime = callTime;
    callDetails.callDuration = callDuration;
}

void CallDataBase::setCallID(string callID){
    callDetails.callID = callID;
}

void CallDataBase::setCallDate(string callDate){
    callDetails.callDate = callDate;
}

void CallDataBase::setCallTime(string callTime){
    callDetails.callTime = callTime;
}

void CallDataBase::setCallDuration(float callDuration){
    callDetails.callDuration = callDuration;
}

string CallDataBase::getCallID(){
    return callDetails.callID;
}

string CallDataBase::getCallDate(){
    return callDetails.callDate;
}

string CallDataBase::getCallTime(){
    return callDetails.callTime;
}

float CallDataBase::getCallDuration(){
    return callDetails.callDuration;
}

//define the functions of CallLog
CallLog::CallLog(){
    callType = "";
}

CallLog::CallLog(string callType){
    this->callType = callType;
}

void CallLog::setCallType(string callType){
    this->callType = callType;
}

string CallLog::getCallType(){
    return callType;
}

void CallDataBase :: setCallDetails(string callID, string callDate, string callTime, float callDuration){
    callDetails.callID = callID;
    callDetails.callDate = callDate;
    callDetails.callTime = callTime;
    callDetails.callDuration = callDuration;
}

void CallDataBase :: addCallDetails(){
    //get data and set in  the list CallLog
    CallLog callLog;
    string callID, callDate, callTime, callType;
    float callDuration;
    cout << "Enter Call ID: "; cin >> callID;
    cout << "Enter Call Date: "; cin >> callDate;
    cout << "Enter Call Time: "; cin >> callTime;
    cout << "Enter Call Duration: "; cin >> callDuration;
    cout << "Enter Call Type: "; cin >> callType;

    //set the data in the list
    callLog.setCallDetails(callID, callDate, callTime, callDuration);
    callLog.setCallType(callType);

    //add the data to the list
    callList.push_back(callLog);

}

void CallDataBase :: showCallDetails() {
    //show the data rowwise
    cout<<"Call ID "<<"Call Date "<<"Call Time "<<"Call Duration "<<"Call Type "<<endl;
    for(int i=0; i<callList.size(); i++){
        cout<<callList[i].getCallID()<<" "<<callList[i].getCallDate()<<" "<<callList[i].getCallTime()<<" "<<callList[i].getCallDuration()<<" "<<callList[i].getCallType()<<endl;
    }
    
}

void CallDataBase :: deleteCallDetails(){
    if(f == admin){
        // string callID;
        // cout<<"Enter Call ID : "<<callID;
        // for (int i = 0; i < callList.size(); i++) {
        //     if (callList[i].getCallID() == callID) {
        //         callList.erase(callList.begin() + i);
        //         cout << "Call Details Deleted Successfully" << endl;
        //     }
        // }
    }
    else{
        cout << "You are not authorized to delete call details" << endl;
        f = ForceExit;
    }
}

void CallDataBase :: updateCallDetails(){
    if(f == admin){
        // string callID;
        // cout<<"Enter Call ID : "<<callID;
        // for (int i = 0; i < callList.size(); i++) {
        //     if (callList[i].getCallID() == callID) {
        //         string callDate, callTime, callType;
        //         float callDuration;
        //         cout << "Enter Call Date: "; cin >> callDate;
        //         cout << "Enter Call Time: "; cin >> callTime;
        //         cout << "Enter Call Duration: "; cin >> callDuration;
        //         cout << "Enter Call Type: "; cin >> callType;

        //         callList[i].setCallDate(callDate);
        //         callList[i].setCallTime(callTime);
        //         callList[i].setCallDuration(callDuration);
        //         callList[i].setCallType(callType);
        //         cout << "Call Details Updated Successfully" << endl;
        //     }
        // }
    }
    else{
        cout << "You are not authorized to update call details" << endl;
        f = ForceExit;
    }
}


#endif // MACRO


