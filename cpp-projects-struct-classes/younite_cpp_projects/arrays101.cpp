
#include "inc/arrays101.h"

int main(){

    cout<<"------- Arrays 101 Solution --------\n";

    //initialize vector 
    vector<int> arr = {0,0,1,1,1,2,2,3,3,4};

    //Solution 1
    cout<<"\n --- Dublicate Zeroes --- \n";
    duplicateZeros(arr);

    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }

    //Solution 2
    vector<int> arr2 = {0,0,1,1,1,0,0,0,1,1};
    cout<<"\n\n --- Max Consective Ones --- ";
    cout<<"\n Max Consective Ones : "<<findMaxConsecutiveOnes(arr2)<<endl;


    //Solution 3
    cout<<"\n\n -- Find Numbers with Even Number of Digits -- ";
    vector<int> arr3 = {12,345,2,6,7896};
    
    cout<<"\nEven No Count : "<<findNumbers(arr3)<<endl; 


    //Solution 4
    cout<<"\n\n -- Squares of a Sorted Array -- ";
    sortedSquares(arr3); cout<<endl;
    for(int i=0; i<arr3.size(); i++){
        cout<<arr3[i]<<" ";
    }

    //Solution 5
    arr2 = {0,0,1};
    arr3 = {12,345,2,6,7896,0,0,0};
    cout<<"\n\n -- Merge Sorted Array -- ";
    merge(arr3,arr3.size(),arr2, arr2.size()); cout<<endl;
    for(int i=0; i<arr3.size(); i++){
        cout<<arr3[i]<<" ";
    }


    //Solution 6
    cout<<"\n\n -- Remove Element -- ";
    removeElement(arr3,0); cout<<endl;
    for(int i=0; i<arr3.size(); i++){
        cout<<arr3[i]<<" ";
    }


    //Solution 7
    arr3 = {1,2,5,5,6,6,7,8,9,9};
    cout<<"\n\n -- Remove Duplicates from Sorted Array -- ";
    removeDuplicates(arr3); cout<<endl;
    for(int i=0; i<arr3.size(); i++){
        cout<<arr3[i]<<" ";
    }


    //Solution 8
    cout<<"\n\n -- Check If N and Its Double Exist -- ";
    cout<<"\n Exist : "<<checkIfExist(arr3)<<endl;


    //Solution 9
    cout<<"\n\n -- Valid Mountain Array -- ";
    cout<<"\n Valid : "<<validMountainArray(arr3)<<endl;


    //Solution 10
    cout<<"\n\n -- Replace Elements with Greatest Element on Right Side -- ";
    replaceElements(arr3); cout<<endl;
    for(int i=0; i<arr3.size(); i++){
        cout<<arr3[i]<<" ";
    }


    //Solution 11
    arr3 = {1,0,0,0,6,6,0,8,9,9};
    cout<<"\n\n -- Move Zeroes -- ";
    moveZeroes(arr3); cout<<endl;
    for(int i=0; i<arr3.size(); i++){
        cout<<arr3[i]<<" ";
    }

    //Solution 12
    cout<<"\n\n -- Sort Array By Parity -- ";
    sortArrayByParity(arr3); cout<<endl;
    for(int i=0; i<arr3.size(); i++){
        cout<<arr3[i]<<" ";
    }

    //Solution 13
    cout<<"\n\n -- Height Checker -- ";
    cout<<"\n Height Checker : "<<heightChecker(arr3)<<endl;


    //Solution 14
    cout<<"\n\n -- Third Maximum Number -- ";
    cout<<"\n Third Maximum Number : "<<thirdMax(arr3)<<endl;
    
}

