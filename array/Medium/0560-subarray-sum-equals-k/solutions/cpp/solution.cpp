class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> prefixcount;
        int sum = 0, cnt = 0;
        prefixcount[0] = 1;
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            if (prefixcount.find(sum - k) != prefixcount.end()) {
                cnt += prefixcount[sum-k];
            }
            prefixcount[sum]++;
        }
        return cnt;
    }
};