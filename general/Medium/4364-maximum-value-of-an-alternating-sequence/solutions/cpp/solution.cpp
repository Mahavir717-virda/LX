class Solution {
public:
    long long maximumValue(int n, int s, int m) {
        if( n == 1)
                return s;
        long long ans1 = 1LL * s + 1LL * ((n - 1) / 2) * (m - 1);
        long long ans2 = 1LL * s + 1LL * (n / 2) * (m - 1) + 1;
        return max(ans1, ans2);
    }
};