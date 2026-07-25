class Solution {
public:
    string rearrangeString(string s, char x, char y) {
        // int idx_x = -1, idx_y = -1;
        // for(int i = 0; i < s.length(); i++)
        //     {
        //         if(s[i] == x)
        //             idx_x = i;

        //         if(s[i] == y)
        //             idx_y = i;
        //     }

        // if(idx_y < idx_x)
        //     return s;

        for(int i = 0; i < s.length(); i++)
            {
                if(s[i] == x)
                {
                    for(int j = i + 1; j < s.length(); j++)
                    {
                        if(s[j] == y)
                            swap(s[i], s[j]);
                    }
                }
            }

        return s;
    }
};