#include <iostream>
#include "inc/function_pointers.h"
using namespace std;


//function declarations [by refrence]
//void findEven(int start, int end, int* EvenSum);
//void findOdd(int start, int end, int* OddSum);
//
////function declarations [by value]
//void findEven(int start, int end, int EvenSum);
//void findOdd(int start, int end, int OddSum);

int main(){

    int start = 5, end = 50;
    int EvenSum = 0, OddSum =0;

    // creating function pointer
    void (*funPtr) (int,int,int);         // ReturnType (* NameOfPointer ) ( Arguments )
    void (*funPtr1) (int,int,int*);

    //pointing the funPtr to SomeFunction
    funPtr = &findEven;         // function with calling by value
    funPtr1 = &findEven;       // function with calling by refrence

    //calling function using pointer [by value]
    funPtr(start,end,EvenSum);
    cout << "\nEvenSum [Calling by value] : " << EvenSum << endl;

    //calling function using pointer [by refrence]
    funPtr1(start,end,&EvenSum);
    cout << "EvenSum [Calling by refrence] : " << EvenSum << endl<<endl;

}
