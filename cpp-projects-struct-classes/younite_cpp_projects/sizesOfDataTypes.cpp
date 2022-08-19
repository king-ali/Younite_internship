#include "inc/sizesOfDataTypes.h"


int main(){

    int integ = 100;
    float floatNum = 100.20;
    char alphab = 'a';
    double doublInteg = 10E8; //10^8
    bool flag = true;

    cout<<"\nSizeof(int)     : "<<sizeof(int)<<" Sizeof(integ)      : "<<sizeof(integ);
    cout<<"\nSizeof(float)   : "<<sizeof(float)<<" Sizeof(floatNum) : "<<sizeof(floatNum);
    cout<<"\nSizeof(char)    : "<<sizeof(char)<<" Sizeof(alphab)    : "<<sizeof(alphab);
    cout<<"\nSizeof(double)  : "<<sizeof(double)<<" Sizeof(doublInteg)    : "<<sizeof(doublInteg);    
    cout<<"\nSizeof(bool)    : "<<sizeof(bool)<<" Sizeof(flag)    : "<<sizeof(flag)<<endl<<endl;

    sizes();
}
