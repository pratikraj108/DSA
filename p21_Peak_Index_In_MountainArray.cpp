#include<iostream>
#include<vector>
using namespace std;

int peakIndexInMountainArray(vector<int> & arr){
    // st =1 , end = n-1  is not used becoz peak st and end never be peak. 
    int start = 1, end = arr.size()-2;  
    while(start < end){
        int mid = start + ( end - start) / 2;
        if( arr[mid-1] < arr[mid] && arr[mid]> arr[mid+1])
        return mid;
        else if(arr[mid-1] < arr[mid]){
            start = mid + 1;
        }else{
            end = mid - 1;
        }
    }
    return -1;   // no need becoz peak always exist, but write if arr not have peak
}

int main(){
    vector <int> arr = {0,3,8,9,5,2};
    cout << "Index of peak element is: " <<peakIndexInMountainArray(arr)<<endl;
    return 0;
}