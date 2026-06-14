#include <iostream>
using namespace std;

int main(){
    #define INT_MAX 100
    #define INT_MIN -1000000
    int nums[]= {5,12,34,-12,0,95};
    int size = 6;
    int smallest = INT_MAX;
    int largest = INT_MIN;
    int minIndex = -1;
    int maxIndex = -1;
    for (int i=0;i<size;i++){
        if(nums[i]< smallest){
            smallest = nums[i];
            minIndex = i;
        }
        // smallest = min(nums[i] , smallest);
        // largest = max(nums[i] , largest);
        if (nums[i] > largest){
            largest = nums[i];
            maxIndex = i;
        }
    }
    cout << "Smallest =" << smallest <<" " <<"at index:"<<minIndex<<endl;
    cout << "Largest =" << largest <<" " <<"at index:"<<maxIndex << endl;
    // for (int i=0;i<size;i++){
    //     if(nums[i]<smallest){
    //         cout << i;
    //     }
    //     if(nums[i]>largest){
    //         cout << i;
    //     }
    // }
    
    return 0;
}