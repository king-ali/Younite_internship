#include <iostream>
using namespace std;

int main(){

    //declaration of dynamic arrays
    int arr[10] ;     
    int sizeOfArray = 10;
    int *ptr = new int[sizeOfArray];     // DataType * NameOfArray = new DataType [ Size ] ;

    //filling the array
    ptr[0] = 20;          // NameOfArray[Index] = Value
    ptr[1] = 30; 
    ptr[2] = 30;          // ... and so on

    //checking the array values
    for(int i=0; i<10; i++){

        cout<<"\nArray at ["<<i<<"] : "<<ptr[i];
        //values after index 2 are 0.
    }


    //filling the array by loop
    for(int i=0; i<10; i++){

        ptr[i] = i*10;
    }

    //checking out the values again
    cout<<"\nFilling the array by loop : ";
    for(int i=0; i<10; i++){

        cout<<"\nArray at ["<<i<<"] : "<<ptr[i];
        //No value is garbage as we have filled it complete.
    }


    //Trying out of bound index
    cout<<"\nArray at index 11: "<<ptr[11];  //garbage value


    // deallocation of memory
	delete [] ptr;               // free the memory
    

}