class Solution {
public:
    int divide_sum(vector<int>& nums, int divisor) {
        int sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            sum += ((nums[i] + divisor - 1) / divisor);
        }

        return sum;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1,
            high = *max_element(nums.begin(), nums.end());

        int mid, ans = 0;

        while (low <= high) {
            mid = low + ((high - low) / 2);
            int curr_sum = divide_sum(nums, mid);

            cout << curr_sum << " For divisor " << mid << endl;
            if (curr_sum <= threshold) {
                ans = mid;
                high = mid - 1;
            } else
                low = mid + 1;
        }

        return ans;
    }
};