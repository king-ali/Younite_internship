//FILE:  cla11a.cc
 //PURPOSE:  Demonstrate usage of records using C++ struct to store information
//          about a book.
  
  #include <iostream>
  #include <string>
  
using namespace std;
  
struct StudentRec
{
    string st_name;
    string st_id;
    string st_major;
    float st_gpa;

};
  
int main()
{
    //declare variables
    StudentRec aStudent;

    //Read in all information for a book
    cout <<"Enter Student Name :  ";
    getline (cin, aStudent.st_name);
    cout <<"Enter Student ID :  ";
    getline (cin, aStudent.st_id);
    cout <<"Enter Student Major :  ";
    getline (cin, aStudent.st_major);
    cout <<"Enter Student GPA :  ";
    cin >> aStudent.st_gpa;
    cin.ignore();

    //Print out all Student information
    cout <<"Student Name :  " << aStudent.st_name << endl;
    cout <<"Student ID :  " << aStudent.st_id << endl;
    cout <<"Student Major :  " << aStudent.st_major << endl;
    cout <<"Student GPA :  " << aStudent.st_gpa << endl;


    return 0;

}
 