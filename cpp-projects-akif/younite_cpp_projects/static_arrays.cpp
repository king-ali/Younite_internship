#include <iostream>
using namespace std;

int main(){

    //declaration of arrays
    int arr[10] ;     // DataType NameOfArray [ Size ] ;

    //Array Above Has Size 10, Starting from 0 to 9
    cout<<"\nSize of Array sizeof(arr) : "<<sizeof(arr); // prints 40 because 4 * 10 

    //filling the array
    arr[0] = 20;          // NameOfArray[Index] = Value
    arr[1] = 30; 
    arr[2] = 30;          // ... and so on

    //checking the array values
    for(int i=0; i<10; i++){

        cout<<"\nArray at ["<<i<<"] : "<<arr[i];
        //values after index 2 are garbage because we did't filled that.
    }


    //filling the array by loop
    for(int i=0; i<10; i++){

        arr[i] = i*10;
    }

    //checking out the values again
    for(int i=0; i<10; i++){

        cout<<"\nArray at ["<<i<<"] : "<<arr[i];
        //No value is garbage as we have filled it complete.
    }


    //Trying out of bound index
    cout<<"\nArray at index 10: "<<arr[11];  //garbage value


    //accessing array using pointer
    int *ptr = arr;      // no need to write & because arrays are always passed as refrence

    cout<<"\nAccessing array using pointer";
    for(int i=0; i<10; i++){

        cout<<"\nArray at ["<<i<<"] : "<<*ptr;
        ptr+=1;
        //values after index 2 are garbage because we did't filled that.
    }
    

}