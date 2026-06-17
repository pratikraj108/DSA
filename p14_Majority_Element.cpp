#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//BRUTE_FORCE APPROACH   ( O(n^2) )

int majorityElement(vector <int>& nums){
    int n=nums.size();
    for(int val : nums){
        int count = 0;
        for(int el : nums){
            if(el == val){
                count++;
            }
            if(count > n/2){
                return val;
            }
        }
    }
    return -1;
}

//OPTIMAL APPROACH , O(nlogn)
int majorityElement_M2(vector<int>& nums){
    int n = nums.size();
    sort(nums.begin(),nums.end());
    int freq = 1, ans = nums[0];
    for(int i=0;i<n;i++){
        if(nums[i]==nums[i-1]){
            freq++;
        }else{
            freq=1;
            ans = nums[i];
        }
        if(freq>n/2){
            return ans;
        }
    }
    return ans;
}

// BEST OPTIMAL APPROACH ( "MOORE'S VOTINF ALGORITHM")
int majorityElement_M3(vector<int>&nums){
    int vote= 0,candidate = 0;
    for(int i=0;i<nums.size();i++){
        if(vote ==0){
            candidate  = nums[i];
        }
        if(candidate = nums[i]){
            vote++;
        }else{
            vote--;
        }
    }
    return candidate;
}


int main(){
    vector<int> nums = {1,2,2,1,1};
    cout<<majorityElement_M3(nums)<<endl;
    return 0;
}




