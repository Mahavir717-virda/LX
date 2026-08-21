class Solution {
public:
    int countRatioSubarrays(vector<int>& nums, double a, double b) {
        int cnt = 0, n = nums.size();
        
        for (int i = 0; i < n; i++) {
            double x = 0.0, y = 0.0;
            for (int j = i; j < n; j++) {
                if (nums[j] % 2 == 0)
                    x+=1.0;
                else
                    y+=1.0;

                 
                if (y > 0 && (x / y) <= (a / b))
                cnt++;
            }            
        }

        return cnt;
    }
};