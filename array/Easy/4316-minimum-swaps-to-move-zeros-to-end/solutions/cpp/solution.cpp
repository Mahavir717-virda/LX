class Solution {
public:
    int minimumSwaps(vector<int>& nums) {
       int cnt = 0;
        int i = 0;
        int j = nums.size() - 1;

        while (i < j) {
            // Move left pointer forward until we find a zero
            while (i < j && nums[i] != 0) {
                i++;
            }
            // Move right pointer backward until we find a non-zero element
            while (i < j && nums[j] == 0) {
                j--;
            }
            // If pointers haven't crossed, swap them
            if (i < j) {
                swap(nums[i], nums[j]);
                cnt++;
                i++;
                j--;
            }
        }
        return cnt;
    }
};