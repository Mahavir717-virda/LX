class Solution {

    bool chr(char x) { return ('a' <= x && x <= 'z'); }

public:
    vector<int> countWordOccurrences(vector<string>& chunks,
                                     vector<string>& queries) {

        string s = "";
        for (auto &it : chunks) {
            s += it;
        }

        int n = s.size();
        string curr_wrd = "";
        map<string, int> mp;
        for (int i = 0; i < n; i++) {
            if (chr(s[i])) {
                curr_wrd.push_back(s[i]);
                continue;
            }
            if (s[i] == '-' && i != n - 1 && i != 0 && chr(s[i - 1]) &&
                chr(s[i + 1])) {
                curr_wrd.push_back(s[i]);
                continue;
            }
            mp[curr_wrd]++;
            curr_wrd = "";
        }
        mp[curr_wrd]++;

        vector<int> fre(queries.size());
        int m = queries.size();
        for (int i = 0; i < m; i++)
            fre[i] = mp[queries[i]];

        return fre;
    }
};