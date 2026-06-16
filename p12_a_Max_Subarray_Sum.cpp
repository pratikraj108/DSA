#include<iostream>
#include<vector>
using namespace std;
#define INT_MIN -1000000

// void allSubarray(int arr[],int sz){
//     for(int start=0; start<sz; start++){
//         for(int end=start; end<sz; end++){
//             for(int i=start; i<=end; i++){
//                 cout <<arr[i];
//             }
//             cout<< " ";
//         }
//         cout<<endl;
//     }
// }
int maxSubarraySum(int arr[],int sz){
    int maxSum=INT_MIN;
    for(int start=0; start<sz; start++){
        int currSum = 0;
        for(int end=start; end<sz; end++){
            currSum+=arr[end];
            maxSum=max(currSum,maxSum);
        }
    }
    return maxSum;
}


int main(){
    int arr[]= {3,-4,5,4,-1,7,-8};
    int sz=7;
    // allSubarray(arr,sz);
   cout<<"Maximum subarray sum: "<< maxSubarraySum(arr,sz)<<endl;    
    return 0;
}