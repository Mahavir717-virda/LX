class Solution {
public:
    vector<int> minCost(vector<int>& nums, vector<vector<int>>& queries) {

        int n = nums.size();
        vector<int> closest(n);

        for (int i = 0; i < n; i++) {
            if (i == 0) {
                closest[i] = 1;
            } 
            else if (i == n - 1) {
                closest[i] = n - 2;
            } 
            else {
                int leftDiff = nums[i] - nums[i - 1];
                int rightDiff = nums[i + 1] - nums[i];

                if (leftDiff <= rightDiff)
                    closest[i] = i - 1;
                else
                    closest[i] = i + 1;
            }
        }

        vector<int> forward(n, 0), backward(n, 0);

        for (int i = 1; i < n; i++) {
            if (closest[i - 1] == i)
                forward[i] = forward[i - 1] + 1;
            else
                forward[i] = forward[i - 1] + (nums[i] - nums[i - 1]);
        }

        for (int i = n - 2; i >= 0; i--) {
            if (closest[i + 1] == i)
                backward[i] = backward[i + 1] + 1;
            else
                backward[i] = backward[i + 1] + (nums[i + 1] - nums[i]);
        }

        vector<int> ans;

        for (auto &q : queries) {
            int l = q[0];
            int r = q[1];

            if (l < r)
                ans.push_back(forward[r] - forward[l]);
            else
                ans.push_back(backward[r] - backward[l]);
        }

        return ans;
    }
};