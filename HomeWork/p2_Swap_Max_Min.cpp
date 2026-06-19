// WAP to swap the MAX and MIN number of an array.
#include <iostream>
using namespace std;
int main(){
    #define INT_MIN -10000
    #define INT_MAX 100000
    int arr[]= {-2,-6,5,6,2,8,10,99};
    int sz = 8;
    int minNum = INT_MAX;
    int maxNum = INT_MIN;
    int minIndex = -1;
    int maxIndex = -1;
    cout<<"Befor Swaping Min and Max: \n";
    for(int i=0;i<sz;i++){
        cout <<arr[i]<<" ";
    }
    for(int i=0;i<sz;i++){
        if(arr[i]< minNum){
            minNum= arr[i];
            minIndex = i;
        }
        if(arr[i]> maxIndex){
            maxNum =arr[i];
            maxIndex = i;
        }
        
    }
    swap(arr[minIndex],arr[maxIndex]);
    cout<<"\nAfter Swaping Min and Max: \n";

    for(int i=0;i<sz;i++){
        cout <<arr[i]<<" ";
    }
    return 0;   
}