class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        vector<int> leftsum;
        vector<int> rightsum(n);

        vector<int> ans;
        int lsum = 0;
        for(auto it : nums)
        {
            leftsum.push_back(lsum);
            lsum += it;
        }

        int rsum = 0;
        for(int i = n - 1; i >= 0; i--)
        {
            rightsum[i] = rsum;
            rsum += nums[i];
        }

        for(int i = 0; i < n; i++)
        {
            ans.push_back(abs(leftsum[i] - rightsum[i]));
        }


        return ans;
    }
};