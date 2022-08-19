#include <iostream>
using namespace std;

struct DateRec
{

int year;
int month;
int day;

};

struct BookRec 
{
       string title;
       string author;
       string publisher;
       float cost;
       DateRec publishDate;   // this is itself a struct
};


int main()
{
    BookRec book1;
    book1.title = "C++ Programming";
    book1.author = "Bjarne Stroustrup";
    book1.publisher = "Addison Wesley";
    book1.cost = 100.00;
    book1.publishDate.year = 2018;
    book1.publishDate.month = 12;
    book1.publishDate.day = 25;

    cout << "Title: " << book1.title << endl;
    cout << "Author: " << book1.author << endl;
    cout << "Publisher: " << book1.publisher << endl;
    cout << "Cost: " << book1.cost << endl;
    cout << "Publish Date: " << book1.publishDate.year << "-" << book1.publishDate.month << "-" << book1.publishDate.day << endl;
    return 0;
}