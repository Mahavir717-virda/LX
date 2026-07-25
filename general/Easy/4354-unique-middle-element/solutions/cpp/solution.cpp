class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        unordered_map<int,int> mp;
        int n = nums.size();
        for(int i = 0; i < n; i++)
            mp[nums[i]]++;

        if(mp[nums[n / 2]] == 1)
            return true;

        return false;
    }
};