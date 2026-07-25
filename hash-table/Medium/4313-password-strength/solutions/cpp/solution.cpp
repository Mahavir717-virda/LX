class Solution {
public:
    int passwordStrength(string password) {
        int ans = 0;
        set<char> s(password.begin(),password.end());
        for(auto x : s)
        {
            if(x >= 'a' && x <= 'z') ans++;
            else if(x >= 'A' && x <= 'Z') ans+=2;
            else if(x >= '0' && x <= '9') ans+=3;
            else ans +=5;
        }
    
        return ans;
    }
};