class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int l = INT_MIN;
        int sum = 0, n = nums.size();
        for(int i = 0; i < n; i++)
        {
            sum += nums[i];
            l = max(l,sum);
            if(sum < 0) sum = 0;
        }
        return l;
    }
};