#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// IN STL next_permutation is a fxn which directely find all next permutaion , but we can't use it.
// next_permutation(nums.begin(),nums.end());
void nexxtPermutation(vector<int>&arr){
    //find the pivot point from right side of the array where arr[i] < arr[i+1] 
    int pivot = -1;
    int n = arr.size();
    for(int i = n-2; i>=0; i--){
        if(arr[i]< arr[i+1]){
            pivot = i;
            break;
        }
    }
    if(pivot == -1){
        reverse(arr.begin(), arr.end());
        return;
    }
    //2nd step: find next larger element which is rightmost element
    for(int i = n-1; i>pivot; i--){
        if(arr[i] > arr[pivot]){
            swap(arr[i], arr[pivot]);
            break;
        }
    }
    //3rd step: reverse the right part of the array
    // reverse(arr.begin() + pivot + 1, arr.end());
    int i = pivot + 1, j = n-1;
    while(i<j){
        swap(arr[i++], arr[j--]);
    }
}
int main(){
    vector<int> arr = {1,2,3};
    nexxtPermutation(arr);
    for(int x: arr) cout<<x<<" ";
    return 0;
}