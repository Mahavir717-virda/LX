class Solution {
public:
    int digit_range(int n) {
        int x = INT_MIN, y = INT_MAX;
        while (n > 0) {
            int temp = n % 10;
            x = max(temp, x);
            y = min(temp, y);
            n /= 10;
        }

        return x - y;
    }
    int maxDigitRange(vector<int>& nums) {
        int n = nums.size(), max_dg_range = INT_MIN;
        vector<int> temp;
        for (int i = 0; i < n; i++) {
            int dg_range = digit_range(nums[i]);
            temp.push_back(dg_range);
            max_dg_range = max(max_dg_range, dg_range);
        }
        int sum = 0;
        for (int i = 0; i < n; i++) {
            if(temp[i] == max_dg_range)
                sum += nums[i];
        }

        return sum;
    }
};