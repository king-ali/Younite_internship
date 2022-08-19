//
// Created by Moulvii on 11/08/2022.
//

#ifndef CPP_INTERNSHIP_FUNCTIONS_H
#define CPP_INTERNSHIP_FUNCTIONS_H

//function definations
void findEven(int start, int end, int* EvenSum) {
    for (int i = start; i <= end; ++i){
        if (!(i & 1)){
            *(EvenSum) += i;
        }
    }
}

void findOdd(int start, int end, int* OddSum) {
    for (int i = start; i <= end; ++i){
        if (i & 1){
            (*OddSum) += i;
        }
    }
}

//function definations [by value]
void findEven(int start, int end, int EvenSum) {
    for (int i = start; i <= end; ++i){
        if (!(i & 1)){
            (EvenSum) += i;
        }
    }
}

void findOdd(int start, int end, int OddSum) {
    for (int i = start; i <= end; ++i){
        if (i & 1){
            (OddSum) += i;
        }
    }
}
#endif //CPP_INTERNSHIP_FUNCTIONS_H
