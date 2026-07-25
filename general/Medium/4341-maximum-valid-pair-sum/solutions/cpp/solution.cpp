class Solution {
public:
    int maxValidPairSum(vector<int>& nums, int k) {
        int ans = INT_MIN, n = nums.size();

        // Brute Force
        // for (int i = 0; i < n; i++) {
        //     for (int j = k; j < n; j++) {
        //         if(j - i >= k)
        //         {
        //             ans = max(ans, nums[i] + nums[j]);
        //         }
        //     }
        // }
        int best = nums[0];

            for (int j = k; j < n; j++) {
            best = max(best, nums[j - k]);
            ans = max(ans, best + nums[j]);
        }
        return ans;
    }
};