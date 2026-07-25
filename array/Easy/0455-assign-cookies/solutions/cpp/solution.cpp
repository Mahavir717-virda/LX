class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());

        int left = 0, right = 0, n = g.size(), m = s.size(), cnt = 0;
        while(left < n && right < m)
        {
            if(s[right] >= g[left])
            {
                cnt++;
                left++;
            }
            right++;
        }

        return cnt;
    }
};