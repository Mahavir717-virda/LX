class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        int n = nums.size();
        vector<int> result;
        result = nums;

        reverse(nums.begin(),nums.end());
        for(int i = n;i<2*n;i++)
            {
                result.push_back(nums[i - n]);
            }
        return result;
        
    }
};