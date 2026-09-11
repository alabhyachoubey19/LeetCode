class Solution {
public:
//rearrange the array in alternating positive and negative sign
/*brute: create an temp array for positive and negative arrays the rearrange them in the original array, time comoplexity: O(2n), space complexity: O(n)*/
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n,0);
        int posIndex = 0, negIndex = 1;
        for(int i = 0; i<n; i++){
            if(nums[i]<0){
            ans[negIndex] = nums[i];
            negIndex += 2;
            }
            else{
                ans[posIndex] = nums[i];
                posIndex +=2;
            }
        }
        return ans;
    }
};