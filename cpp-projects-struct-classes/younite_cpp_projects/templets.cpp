#include <iostream>
using namespace std;
#include "inc/templets.h"

int main(){

    int arr[] = {1,2,3,4,5,6};

    int *ptr = arr;
    int len = sizeof(arr) / sizeof(int);

    cout<<"Array Values : \n";
    for(int i=0; i<len; i++){
        cout<<"["<<i<<"]  :"<<*ptr<<endl;
        ptr+=1;
    }

    
    funct(arr,len);



    int *x; float *y; char *z; double *a;
    cout<<"\nInt Pointer: "<<sizeof(x);
    cout<<"\nfloat Pointer: "<<sizeof(y);
    cout<<"\nchar Pointer: "<<sizeof(z);
    cout<<"\ndouble Pointer: "<<sizeof(a);
}