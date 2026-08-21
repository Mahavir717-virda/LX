class Solution {
public:
    long long maxPairStrength(vector<int>& nums) {
        long long ans = 0;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
                long long ni = nums[i];
            for (int j = i + 1; j < n; j++) {
                long long nj = nums[j];
                long long temp = (ni * nj)/pow(gcd(ni, nj), 2);
                ans = max(ans, temp);
            }
        }

        return ans;
    }
};