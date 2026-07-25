class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int i = 0, j = nums.size() - 1;
        int result = 0;

        for (int i = 0; i < nums.size(); i++) {
                int maximum = *max_element(nums.begin() , nums.begin() + i);
                int minimum = *min_element(nums.begin() + i,nums.end());

                if(maximum - minimum <= k) return i;
                else result = -1;

        }
            return result;
    }
};