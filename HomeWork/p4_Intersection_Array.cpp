#include<iostream>
using namespace std;

int main(){
    int arr1[]={1,2,4,5,7,8,10};
    int arr2[]={2,4,6,8,10,12,14};
    int sz1=7;
    int sz2=7;
    for(int i =0;i<sz1;i++){
        int count=0;
        for(int j=0;j<sz2;j++){
            if(arr1[i]==arr2[j]){
                cout << arr1[i]<<" ";
                break;
            }
        }
    }
    return 0;
}