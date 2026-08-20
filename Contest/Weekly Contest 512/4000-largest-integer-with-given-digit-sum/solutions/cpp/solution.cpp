class Solution {
public:
    int largestInteger(int n, int s) {
        if (n * 9 < s)
            return -1;

        int max_sum = 0;
        for(int i = 0; i < n; i++)
            {
                int digit = min(9,s);
                max_sum = (max_sum * 10) + digit;
                s-= digit;
            }
        return max_sum;
    }
};