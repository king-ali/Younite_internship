//
// Created by Moulvii on 11/08/2022.
//

#ifndef CPP_INTERNSHIP_TEMPLETS_H
#define CPP_INTERNSHIP_TEMPLETS_H


void funct(int *arr, int len){

    int *ptr = arr;
    //len = sizeof(arr) / sizeof(*arr);

    cout<<"Array Values by fucntion : \n";
    for(int i=0; i<len; i++){

        cout<<"["<<i<<"]  :"<<*ptr<<endl;
        ptr+=1;
    }
}


#endif //CPP_INTERNSHIP_TEMPLETS_H
