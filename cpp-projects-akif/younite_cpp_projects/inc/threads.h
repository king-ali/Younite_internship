//
// Created by Moulvii on 11/08/2022.
//

#ifndef CPP_INTERNSHIP_THREADS_H
#define CPP_INTERNSHIP_THREADS_H

void findEven(ull start, ull end, ull* EvenSum) {
    for (ull i = start; i <= end; ++i){
        if (!(i & 1)){
            *(EvenSum) += i;
        }
    }
}

void findOdd(ull start, ull end, ull* OddSum) {
    for (ull i = start; i <= end; ++i){
        if (i & 1){
            (*OddSum) += i;
        }
    }
}

#endif //CPP_INTERNSHIP_THREADS_H
