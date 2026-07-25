class Solution {
public:
    int missingNumber(vector<int>& nums) {
        unordered_map<int, int> mp;
        int ans;
        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
        }

        for (int i = 0; i < nums.size(); i++) {
            if (mp.find(i) == mp.end()) {
                ans = i;
            }
        }

        return ans;
    }
};