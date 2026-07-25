class Solution {
public:
    int countValidSubarrays(vector<int>& nums, int x) {
        int cnt = 0;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            long long sum = 0;
            for (int j = i; j < n; j++) {
                sum += nums[j];
                // 1. Last digit check (Fast O(1))
                if (sum % 10 == x) {
                    // 2. First digit check (Only evaluated if last digit
                    // matches)
                    string s = to_string(sum);
                    if (s[0] - '0' == x) {
                        cnt++;
                    }
                }
            }
        }

        return cnt;
    }
};