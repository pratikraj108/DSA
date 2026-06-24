#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int bubbleSort(vector<int>&nums,int n){
    for(int i = 0; i<n-1; i++){
        bool isSwap = false;

        for(int j = 0; j<n-i-1; j++){
            if(nums[j]>nums[j+1]){
                swap(nums[j],nums[j+1]);
                isSwap = true;
            }
        }
        if(!isSwap){
            cout<<"Array is already sorted\n";
            break;
        }
    }
}

void printArray(vector<int>&nums , int n){
    for(int i =0 ;i<n ;i++){
        cout<<nums[i] << " ";
    }
    cout <<endl;
}

int main(){
    vector<int> nums = {1,2,3,4,5};
    int n = 5;
    bubbleSort(nums,n);
    printArray(nums,n);
    return 0;
}