class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
        int mincnt = floor(nums.size() / 3);

        unordered_map<int, int> mp;

        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
        }

        for (auto it : mp) {
            if (it.second > mincnt)
                ans.push_back(it.first);
        }

        return ans;
    }
};