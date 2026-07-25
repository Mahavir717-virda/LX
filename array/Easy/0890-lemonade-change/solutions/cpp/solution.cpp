class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int v5 = 0, v10 = 0, v20 = 0;
        int i = 0, n = bills.size();
        bool ans = true;
        while (i < n) {
            if (bills[i] == 5) {
                v5++;
            } else if (bills[i] == 10) {
                if (v5 > 0) {
                    v10++;
                    v5--;
                } else {
                    return false;
                }
            } else if (bills[i] == 20) {
                if (v5 > 0 && v10 > 0) {
                    v20++;
                    v5--;
                    v10--;
                } else if (v5 >= 3) {
                    v20++;
                    v5 -= 3;
                } else {
                    return false;
                }
            }
            i++;
        }

        return ans;
    }
};