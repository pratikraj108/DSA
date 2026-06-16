#include<iostream>
using namespace std;
#define INT_MIN -100000000

int main(){
    int arr[]= {3,-4,5,4,-1,7,-8};
    int sz= 7;
    int maxSum =INT_MIN;
    int currSum = 0;
    for(int i=0;i<sz;i++){
        currSum+=arr[i];
        maxSum= max(currSum,maxSum);

        if(currSum <0){
            currSum=0;
        }
    }
    cout << "Maximum Subarray Sum is: "<< maxSum<<endl;    return 0;
}