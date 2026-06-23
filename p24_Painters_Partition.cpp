#include <iostream>
#include <vector>
#define INT_MIN -2147483648
using namespace std;


bool isPossible(vector<int>& arr,int k,int maxAllowedTime){
    int n = arr.size();
    int painters =1 , time = 0;
    for(int i = 0;i<n;i++){
        if(arr[i] > maxAllowedTime) return false;
        if(time + arr[i] <= maxAllowedTime){
            time += arr[i];
        }else{
            painters++;
            time = arr[i];
        }
    }
    return painters <= k;
}
int minTime(vector<int>& arr, int k) {
    int n = arr.size();
    if(k > n) return -1;
    int sum = 0,  maxValue = INT_MIN;
    for( int i= 0; i<n; i++){
        sum += arr[i];
        maxValue = max( maxValue,arr[i]);
    }
    int st = maxValue, end = sum , ans = -1; 
    while (st <= end){
        int mid = st + (end - st)/2;
        if(isPossible(arr,k,mid)){
            ans = mid;
            end = mid -1;
        }else{
            st = mid +1;
        }
    }
    return ans;
}

int main(){
    vector<int> arr = {5,10,30,20,15};
    int k = 3; 
    cout << "Minimum amount of time: "<< minTime(arr, k)<<endl;
    return 0;
}