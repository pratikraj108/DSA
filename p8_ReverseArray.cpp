#include <iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    int size = 5;
    int start =0;
    int end = size-1;
    while (start < end){
        swap(arr[start],arr[end]);
        start++;
        end--;      
    }
    for(int i=0;i<size;i++){
        cout << arr[i]<< " ";

    }
    cout << endl;
    return 0;
}


/*
void reverseArray(int arr[], int sz){
int start = 0, end = sz-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
int main(){
    int arr[] = {1,2,3,4,5};
    int sz= 5;
    reverseArray(arr, sz);
    for(int i=0;i<sz;i++){
        cout <<arr[i] << " ";
    }
     cout <<endl;
    return 0;
} 
*/