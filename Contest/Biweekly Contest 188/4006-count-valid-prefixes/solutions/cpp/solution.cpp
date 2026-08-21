class Solution {
public:
    int countValidPrefixes(string s) {
        int cnt = 0;
        
        for (int i = 0; i < s.length(); i++) {
           int cnt0 = 0, cnt1 = 0;
            for (int j = 0; j <= i; j++) {
                if (s[j] == '0') {
                    cnt0++;
                } else {
                    cnt1++;
                }
            }
            if(abs(cnt0 - cnt1) <= 1)
                cnt++;
        }

        return cnt;
    }
};