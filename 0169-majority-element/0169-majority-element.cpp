class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0, majorElement;
        for(int i = 0; i<nums.size(); i++){
            if(count == 0){
                majorElement = nums[i];
                count++;
            }
            else if(nums[i] == majorElement){
                count++;
            }
            else{
                count--;
            }
        }
        int assure; //variable to check whether the potential element is actually the maojority element or not
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] == majorElement){
                assure++;
            }
        }
        if(assure > (nums.size()/2)){
            return majorElement;
        }
        return -1;
    }
};