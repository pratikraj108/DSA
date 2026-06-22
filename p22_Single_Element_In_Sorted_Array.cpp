#include<iostream>
#include<vector>
using namespace std;

int singleNonDuplicate(vector<int>& nums) {
    int n = nums.size();
    int st = 0, end = n - 1;
    // corner case 1 : if array has exactly one element then single element
    // is itself
    if (n == 1)
        return nums[0];
    while (st <= end) {
        int mid = st + (end - st) / 2;
        // corner case 2:  if 1st element , 0 index is single element then
        // a[-1] not exist for comparing, similarly if last element (i.e
        // n-1) is single element then there is no next arr[n] element exist
        // for coapring then....
        if (mid == 0 && nums[0] != nums[1])
            return nums[mid];
        if (mid == n - 1 && nums[n - 1] != nums[n - 2])
            return nums[mid];

        // mai logic
        //  if mid is single element itself
        if (nums[mid - 1] != nums[mid] && nums[mid] != nums[mid + 1])
             return nums[mid];

        if (mid % 2 == 0) { // even
            nums[mid - 1] == nums[mid] ? end = mid - 1 : st = mid + 1;
        } else {
            nums[mid - 1] == nums[mid] ? st = mid + 1 : end = mid - 1;
        }
    }
    return -1;
}

int main(){
    vector<int> nums = {3,3,7,7,10,11,11};
    cout << "Single number is :" << singleNonDuplicate(nums)<<endl;
    return 0;
}