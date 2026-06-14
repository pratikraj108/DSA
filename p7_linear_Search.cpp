#include <iostream>
using namespace std;

int linearsearch(int arr[], int sz, int target){
    for(int i=0;i<sz;i++){
        if(arr[i] == target){
            return i;
        }
    }
    return -1;
}
int main (){
    int arr[] ={4,2,6,7,9,10,12};
    int sz=7;
    int target = 9;
    
    cout << linearsearch(arr,sz,target)<<endl;
    return 0 ;
}

// #include<iostream>
// #include<vector>
// using namespace std;

// int linearsearch(vector<int>& arr,int sz,int target){
//     for(int val: arr){
//         arr[val]==target;
//         return val;
//     }
// }
// int main(){
//     vector <int> arr = {4,2,6,7,9,10,12};
//     int sz= arr.size();
//     int target= 9;
//     cout <<linearsearch(arr,sz,target);
//     return 0;
// }