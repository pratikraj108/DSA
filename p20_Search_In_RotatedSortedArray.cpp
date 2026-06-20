#include<iostream>
#include<vector>
using namespace std; 

int searchInRotatedSortedArray(vector<int> arr,int target){
    int st = 0 ;
    int en = arr.size()-1;
    while(st <=en){
        int mid = st+ (en-st) / 2;
        if(arr[mid] == target) return mid;
        //left sorted
        if(arr[st]<= arr[mid]){
            if(arr[st] <= target && target < arr[mid]){
                en = mid - 1;
            }else{
                st = mid + 1;
            }
        }else{
            if(arr[mid]< target && target <= arr[en]){
                st = mid + 1;
            }
            else{
                en = mid -1 ;
            }
        }
    }
    return -1;
}

int main(){
    vector<int> arr = {-4,5,6,7,0,1,2};
    int target = 5;
    cout << "Element is: "<<searchInRotatedSortedArray(arr,target)<<endl;
    return 0;
} 