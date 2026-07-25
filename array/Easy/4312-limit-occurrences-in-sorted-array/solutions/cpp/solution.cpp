class Solution {
public:
    vector<int> limitOccurrences(vector<int>& nums, int k) {
        vector<int> ans;
        map<int,int> cnt;
        for(int i = 0;i<nums.size();i++)
        {
            if(cnt[nums[i]] == k) continue;
            
            cnt[nums[i]]++;
            ans.push_back(nums[i]);
        }

        return ans;
    }
};