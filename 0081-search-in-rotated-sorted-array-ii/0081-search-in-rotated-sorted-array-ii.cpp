class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int low = 0, high = nums.size() - 1;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (nums[mid] == target) {
                return true;
            }
            if (nums[low] == nums[mid] && nums[mid] == nums[high]) {
                low++;
                high--;
                continue; // this makes sure that until and unless the above
                          // condition becomes invalid the next code doesn't run
            }
            if (nums[low] <= nums[mid]) { // checking whether left half is
                                          // sorted
                if (nums[low] <= target && target < nums[mid]) {
                    high = mid - 1; // if the above condition is valid then
                                    // target lies in the left half so we make
                                    // the search area in just the left half
                } else {
                    low = mid +
                          1; // if not valid then target lies in the right half
                }
            } else { // left half isn't sorted thus right half is sorted
                if (nums[mid] <= target && target <= nums[high]) {
                    low = mid + 1; // making search area just the right half
                } else {
                    high = mid - 1; // making search area just the left half
                }
            }
        }
        return false;
    }
};