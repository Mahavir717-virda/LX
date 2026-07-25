class Solution {
public:
    int minOperations(string s1, string s2) {
        int n = s1.length();

        if (n == 1) {
            if (s1[0] == '1' && s2[0] == '0')
                return -1;
        }

        int totalCost = 0;
        int i = 0;

        while (i < n) {
            if (s1[i] == '1' && s2[i] == '0') {
                if (i + 1 < n && s1[i + 1] == '1' && s2[i + 1] == '0') {
                    totalCost += 1;
                    i += 2;
                } else {
                    totalCost += 2;
                    i += 1;
                }
            } else if (s1[i] == '0' && s2[i] == '1') {
                totalCost += 1;
                i += 1;
            } else {
                i += 1;
            }
        }

        return totalCost;
    }
};