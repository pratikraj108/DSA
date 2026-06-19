
#include<iostream>
#include<vector>
using namespace std;

//BRUTE FORCE    ( O(N^2))
int maxArea(vector<int>& height) {
    int maxWater = 0;
    int n = height.size();
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            int width = j-i;
            int ht = min(height[i],height[j]);
            int area = width*ht;
            maxWater = max(maxWater, area);
        }
    }
    return maxWater;
}

//TWO POINTER APPROACH
int maxWaterFxn(vector<int>& height){
    int LP =0,  RP = height.size()-1 , maxWater = 0;
    while(LP<RP){
        int w = RP - LP;
        int ht = min(height[LP], height[RP]);
        int currWater = w * ht;
        maxWater = max(maxWater, currWater);
        height[LP]<height[RP] ? LP++ : RP--;
    }
    return maxWater;
}

int main(){
    vector<int> height = {1,8,6,2,5,4,8,3,7};
    cout<<"MaxWater is: "<<maxWaterFxn(height);
    return 0;
}