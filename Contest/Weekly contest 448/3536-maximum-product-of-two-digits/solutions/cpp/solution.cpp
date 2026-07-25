class Solution {
public:
    int maxProduct(int n) {
        vector<int> ans;

        while(n > 0)
        {
            int temp = n % 10;
            ans.push_back(temp);
            n/=10;
        }

        sort(ans.begin(), ans.end(), greater<int>());

        return ans[0] * ans[1];
    }
};