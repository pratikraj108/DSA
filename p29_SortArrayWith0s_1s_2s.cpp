#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
// BRUTE FORCE APPROACH   O(nlogn)
void bruteForceApproach(vector<int>& arr){
    sort(arr.begin(),arr.end());
}

//OPTIMIZED APPROACH      O(N)    2 PASS IS USED  
void optimizedApproach(vector<int>&arr){
    int n = arr.size();
    int countZeros = 0, countOnes = 0, countTwos = 0;
    for(int i=0 ;i<n; i++){   // O(n)
        if(arr[i] == 0) countZeros++;
        else if(arr[i] == 1) countOnes++;
        else countTwos++;
    }
    //  O(N)
    int idx= 0;
    for(int i= 0; i<countZeros; i++){
        arr[idx++] = 0;
    }
        for(int i= 0; i<countOnes; i++){
        arr[idx++] = 1;
    }
        for(int i= 0; i<countTwos; i++){
        arr[idx++] = 2;
    }


}

// OPTIMAL APPROACH       O(N)  1 PASS IS USED
// Dutch National Flag Algorithm

void dutchNationalFlagAlgorithm(vector<int>&arr){
    int n = arr.size();
    int low = 0, mid = 0 , high = n-1;
    while(mid<= high){
        if(arr[mid] == 0){
            swap(arr[low], arr[mid]);
            mid++;
            low++;
        }
        else if(arr[mid] == 1){
            mid++;
        }else{
            swap(arr[high], arr[mid]);
            high--;
        }
    }
}


void printArray(vector<int>& arr) {
    for (int x : arr) {
        cout << x << " ";
    }
    cout << endl;
}
int main(){
    vector<int> arr = {2,0,2,1,1,0,1,2,0,0};
    dutchNationalFlagAlgorithm(arr);
    printArray(arr);
    return 0;
}