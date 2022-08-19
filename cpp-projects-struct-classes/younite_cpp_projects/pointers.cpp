#include <iostream>
using namespace std;

int main() {

    int var = 5;       // int variable : Contains Data at spesific address in Mem.
    int* ptr;          // Empty pointer Pointing Noware / garbage value

    cout<<"\nValue of var : "<<var<< " Value of *ptr : "<<*ptr;
    cout<<"\nAdress of var (&var) : "<<&var<< " Address of ptr (&ptr) : "<<&ptr;

    ptr = &var;    //store address of var in ptr
    cout<<"\nValue of var : "<<var<< " Value of *ptr : "<<*ptr;

    cout<<"\nMem. address of var (&var) : "<<&var;
    cout<<"\nGetting address of (&var) by ( ptr ) : "<<ptr;    // it is same as the &var 


    //changing the value stored in var by ptr
    *ptr = 10;
    cout<<"\nNew value of var : "<<var<<" New value by ptr (*ptr) : " << *ptr;

    //different types of pointers
    char *charptr;
    float *floatptr;
    double *doubleptr;

    
    return 0;
}