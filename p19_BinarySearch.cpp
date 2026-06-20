#include<iostream>
#include<vector>
using namespace std; 

// ITTERATIVE 
int binarySearch(vector<int> arr,int target){
    int st = 0 ;
    int en = arr.size()-1;
    while(st <=en){
        int mid = st+ (en-st) / 2;
        if(target > arr[mid]){
            st = mid+1;
        }
        else if(target < arr[mid]){
            en = mid-1 ;
        }else{
            return mid;
        }
    }
    return -1;
}
//RECURSIVE APPROACH

int main(){
    vector<int> arr = {-1,0,3,4,5,9,12,13};
    int target = 5;
    cout << "Element is: "<<binarySearch(arr,target)<<endl;
    return 0;
} 