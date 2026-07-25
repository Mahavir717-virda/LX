class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int length = 0;
        for (int left = 0; left < s.length(); left++) {
            unordered_set<char> st;

            for (int right = left; right < s.length(); right++) {
                if (st.count(s[right]))
                    break;

                st.insert(s[right]);
                length = max(length, right - left + 1);
            }
        }

        return length;
    }
};
