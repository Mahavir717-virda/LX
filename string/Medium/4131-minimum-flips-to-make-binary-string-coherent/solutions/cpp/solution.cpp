class Solution {
public:
    int minFlips(std::string s) {
        int n = s.length();
        int count1 = 0;
        int count0 = 0;
        for (char c : s) {
            if (c == '1') count1++;
            else count0++;
        }

        // Option 1: All 0s
        int res = count1;

        // Option 2: All 1s
        res = std::min(res, count0);

        // Option 3: Exactly one 1 at any position i
        // Cost = (total 1s) - (1 if s[i]=='1' else -1)
        // To minimize, we keep an existing 1 if possible.
        if (count1 > 0) res = std::min(res, count1 - 1);
        else res = std::min(res, 1);

        // Option 4: Exactly two 1s, one at s[0] and one at s[n-1]
        if (n >= 2) {
            int flips = 0;
            // Need s[0] to be '1'
            if (s[0] == '0') flips++;
            // Need s[n-1] to be '1'
            if (s[n - 1] == '0') flips++;
            // All middle elements must be '0'
            // Total 1s in middle = count1 - (is s[0]==1) - (is s[n-1]==1)
            int mid1s = count1 - (s[0] == '1' ? 1 : 0) - (s[n - 1] == '1' ? 1 : 0);
            flips += mid1s;
            res = std::min(res, flips);
        }

        return res;
    }
};