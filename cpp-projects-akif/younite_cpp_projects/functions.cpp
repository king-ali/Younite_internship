#include <iostream>
#include "inc/functions.h"

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

    //calling it by Value
    findEven(start,end, EvenSum);
	findOdd(start, end, OddSum);

    cout << "OddSum [Calling by value] : " << OddSum << endl;
	cout << "EvenSum [Calling by value] : " << EvenSum << endl;

    //calling it by refrence
    findEven(start,end, &EvenSum);
	findOdd(start, end, &OddSum);

    cout << "OddSum [Calling by refrence] : " << OddSum << endl;
	cout << "EvenSum [Calling by refrence] : " << EvenSum << endl;
}
