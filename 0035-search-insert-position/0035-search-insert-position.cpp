class Solution {
public:
    int function(vector<int> &nums, int low, int high, int target){
    if(low > high){
        return low;
    }
    if(target > nums[high]){
        return high+1;
    }
    int mid = (low+high)/2;
    if(nums[mid] == target){
        return mid;
    }
    else if(target > nums[mid]){
	    return function(nums, mid+1, high, target);
    }
    return function(nums, low, mid-1, target);
    }
    int searchInsert(vector<int>& nums, int target) {
        return function(nums, 0, nums.size()-1, target);
    }
};