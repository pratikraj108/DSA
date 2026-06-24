#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void selectionSort(vector<int>&nums, int n){    // O(N^2)
    for(int i =0; i<n-1; i++){
        int smallestIdx = i; /// starting part pf unsorted
        for(int j =i+1; j<n; j++){
            if(nums[j] < nums[smallestIdx]){
                smallestIdx = j;
            }
        }
        swap (nums[i], nums[smallestIdx]);
    }
}
void printArray(vector<int>&nums , int n){
    for(int i =0; i<n; i++){
        cout<<nums[i] << " ";
    }
    cout <<endl;
}

int main(){
    vector<int> nums = {1,2,3,4,5};
    int n = 5;
    selectionSort(nums,n);
    printArray(nums,n);
    return 0;
}