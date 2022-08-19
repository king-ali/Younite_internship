//
// Created by Moulvii on 11/08/2022.
//

#ifndef CPP_INTERNSHIP_ARRAYS101_H
#define CPP_INTERNSHIP_ARRAYS101_H

#include <iostream>
using namespace std;

#include <string>
#include <vector>
#include <algorithm>    // std::unique, std::distance
#include <cmath>




int findMaxConsecutiveOnes(vector<int>& nums) {
    int prev=0, curr =0;

    for(int i=0; i<nums.size(); i++){

        if(nums[i]==0 ){
            curr =0;

        }
        else{
            curr+=1;
            if(prev<curr){

                prev=curr;
                //cout<<"\nindex : "<<i<<" "<<nums[i]<<" prev : "<<prev<<" curr : "<<curr;
            }
        }
    }


    return prev;
}

int findNumbers(vector<int>& nums) {
    int num_count=0; int count=0;

    for (auto it = nums.begin(); it != nums.end(); it++){

        num_count = int(log10(*it)) + 1 ;
        // cout<<"\nnum_count : "<<num_count;
        if(num_count%2==0){

            count+=1;
        }
        num_count = 0;

    }

    return count;
}

vector<int> sortedSquares(vector<int>& nums) {
    vector<int> result;
    for(auto it=nums.begin(); it!=nums.end(); it++){

        result.push_back((*it) * (*it));
    }

    sort(result.begin(),result.end());

//         for(auto it=result.begin(); it!=result.end(); it++){

//             cout<<"\nValues : "<<*it;
//         }

    return result;
}


void duplicateZeros(vector<int>& arr) {  //[1,0,2,3,0,4,5,0]

    int n = arr.size();

    for(int i = n-1; i >= 0; i--){


        //cout<<"\narr[i] : "<<arr[i];
        if(arr[i] == 0){

            arr.insert(arr.begin() + i, 0);

            //insert itself shifts and does everythig.... :)
        }
    }

    arr.resize(n);
}

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int j=0;
    for(int i=m; i<m+n; i++){

        nums1.insert(nums1.begin()+i,nums2[j]);
        j+=1;
    }
    nums1.resize(m+n);
    sort(nums1.begin(),nums1.end());

    // for(int i=0; i<m+n; i++){
    //     cout<<" "<<nums1[i];
    // }
}

int removeElement(vector<int>& nums, int val) {  //nums = [0,1,2,2,3,0,4,2]  val = 2

    //first of all sorting to combine vals
    sort(nums.begin(),nums.end());               // nums = [0,0,1,2,2,2,3,4]

    int i=0; int k =nums.size();

    for( i; i<nums.size(); i++){

        if(nums[i]==val){

            int temp = nums[i] ;
            nums[i] = nums[k-1];
            k-=1;

        }
    }

    // nums.resize(k);
    return k;
}


int removeDuplicates(vector<int>& nums) {  //nums = [0,0,1,1,1,2,2,3,3,4]

    //Solution 1

    vector<int> :: iterator it;
    int size = nums.size();
    int s = size;

    for(int i=0; i<nums.size(); i++){

        if( find(nums.begin()+i+1,nums.end(),nums[i]) !=nums.end()){
            s -=1;
            //     nums.erase( nums.begin()+i);
            //    // i-=1;
        }
    }

    cout<<" "<<s;
    sort( nums.begin(), nums.end() );
    nums.erase( unique(nums.begin(),nums.end()),nums.end());
    return s;



    /*
    //solution2
    vector<int> *ptr = NULL; int size = nums.size();
    ptr = &nums;
    for(int i=0; i<nums.size()-1; i++){
        //cout<<" "<<(*ptr).at(i);

        if(nums[i]==nums[i+1]){

            nums.erase(nums.begin()+i);
            size -=1;
        }

    }

    return size;
    */

}

bool checkIfExist(vector<int>& arr) {

    int max = arr[0];
    for (int i=0; i<arr.size(); i++){

        for (int j=0; j<arr.size(); j++){

            if(i!=j){

                if(arr[j]==0 && arr[i] == 0){

                    return true;
                }

                if(arr[j]*2 == arr[i]){

                    cout<<" "<<arr[j]<<" "<<arr[i];
                    return true;
                }
            }
        }
    }

    return false;
}


bool validMountainArray(vector<int>& arr) {

    int size = arr.size(); int index = 0;
    int s = size; int max =arr[0];

    if(size<3){
        return false;
    }
    for(int i=1; i<size; i++){

        if(max<arr[i]){
            max = arr[i];
            index = i;
        }
    }

    if(index == 0 || index ==size-1){
        return false;
    }

    //left check
    for(int i = 0; i<index-1; i++ ){

        cout<<"\nleft : "<<arr[i];
        if(arr[i]>arr[i+1] || arr[i]==arr[i+1] ){

            return false;
        }
    }

    //right check
    for(int i = index; i<size-1; i++ ){
        cout<<"\nright : "<<arr[i];
        if(arr[i]<arr[i+1] || arr[i]==arr[i+1]){

            return false;
        }
    }

    return true;
}

vector<int> replaceElements(vector<int>& arr) {

    if(arr.size()==1){
        arr[0] = -1;
        return arr;
    }

    int size = arr.size(); int max =0; int index=0;
    for(int i=0; i<size; i++){

        index = i+1; max =arr[i+1];
        while(index<size){

            if(max<arr[index]){
                max = arr[index];
            }
            index++;
        }

        arr[i] = max;

    }
    arr[size-1] = -1;
    return arr;
}

/*
int removeDuplicates(vector<int>& nums) {  //nums = [0,0,1,1,1,2,2,3,3,4]

    //Solution 1

    vector<int> :: iterator it;
    int size = nums.size();
    int s = size;

    for(int i=0; i<nums.size(); i++){

        if( find(nums.begin()+i+1,nums.end(),nums[i]) !=nums.end()){
            s -=1;
            //     nums.erase( nums.begin()+i);
            //    // i-=1;
        }
    }

    cout<<" "<<s;
    sort( nums.begin(), nums.end() );
    nums.erase( unique(nums.begin(),nums.end()),nums.end());
    return s;



    
    //solution2
    // vector<int> *ptr = NULL; int size = nums.size();
    // ptr = &nums;
    // for(int i=0; i<nums.size()-1; i++){
    //     //cout<<" "<<(*ptr).at(i);

    //     if(nums[i]==nums[i+1]){

    //         nums.erase(nums.begin()+i);
    //         size -=1;
    //     }

    // }

    // return size;
    

}

*/


void moveZeroes(vector<int>& nums) {  //nums = [0,1,0,3,12]

    int s = nums.size(); int temp =0; int count=0;
    for(int i=0; i<nums.size(); i++){

        if (nums[i] != 0){  // saving the non zeros values
            nums[count++] = nums[i];     //   nums = [1,3,12_,_]
        }
    }

    while (count < s)
        nums[count++] = 0;               //nums = [1,3,12,0,0]

}


vector<int> sortArrayByParity(vector<int>& nums) {

vector<int> result;
    for (auto it = nums.begin(); it != nums.end(); it++)
    {
        if((*it) % 2 == 0){
            result.push_back(*it);
        }
            
    }
    for (auto it = nums.begin(); it != nums.end(); it++)
    {
        if((*it) % 2 != 0){
            result.push_back(*it);
        }
            
    }
return result;

    /* Solution 2 Iterative
    //         int size = nums.size();
//         int *even = new int[size]; int *odd = new int[size];
//         int evenCount =0, oddCount =0;
//         for(int i=0; i<size; i++){

//             if(nums[i]%2==0){
//                 even[evenCount++] = nums[i];
//                 cout<<" "<<even[evenCount-1]<<endl;
//             }
//             if(nums[i]%2!=0){
//                 even[oddCount++] = nums[i];
//                  cout<<" "<<even[oddCount-1]<<endl;
//             }
//         }

//         for(int i=0; i<size; i++){
//             if(i<evenCount){
//                 nums[i] = even[i];
//             }
//             else{
//                 nums[i] = odd[i-evenCount];
//             }
//         }
//         return nums;
    */
}

/*
int removeElement(vector<int>& nums, int val) {  //nums = [0,1,2,2,3,0,4,2]  val = 2

    //first of all sorting to combine vals
    sort(nums.begin(),nums.end());               // nums = [0,0,1,2,2,2,3,4]

    int i=0; int k =nums.size();

    for( i; i<nums.size(); i++){

        if(nums[i]==val){

            int temp = nums[i] ;
            nums[i] = nums[k-1];
            k-=1;

        }
    }

    // nums.resize(k);
    return k;
}
*/

int heightChecker(vector<int>& heights) {


    vector<int> Approx(heights);

    // for (int i=0; i<heights.size(); i++) {
    //     cout<<" "<<Approx[i];
    // }

    sort(Approx.begin(),Approx.end());

    int count=0;
    for(int i=0; i<heights.size(); i++){
        // cout<<" "<<Approx[i]<<" "<<heights[i]<<endl;

        if(heights[i]!=Approx[i]){
            count+=1;
        }
    }

    return count;
}

int thirdMax(vector<int>& nums) {

    sort(nums.rbegin(),nums.rend());
    nums.erase( unique(nums.begin(),nums.end()),nums.end());

    //for(int i=0; i<nums.size(); i++){cout<<" "<<nums[i]<<endl;}
    
    if(nums.size()<3){return nums[0];}
    else {
        return nums[2];
    }

}

/*
vector<int> sortedSquares(vector<int>& nums) {
    vector<int> result;
    for(auto it=nums.begin(); it!=nums.end(); it++){

        result.push_back((*it) * (*it));
    }

    sort(result.begin(),result.end());

//         for(auto it=result.begin(); it!=result.end(); it++){

//             cout<<"\nValues : "<<*it;
//         }

    return result;
}
*/

#endif //CPP_INTERNSHIP_ARRAYS101_H
