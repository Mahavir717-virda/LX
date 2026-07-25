class Solution {
public:
    int getLength(vector<int>& nums) {

        int n = nums.size();
        int len = 0;

        for(int i = 0; i < n; i++)
        {
            map<int,int> freq;
            map<int,int> cntfreq;

            for(int j = i; j < n; j++)
            {
                int oldFreq = freq[nums[j]];

                if(oldFreq > 0)
                {
                    cntfreq[oldFreq]--;

                    if(cntfreq[oldFreq] == 0)
                        cntfreq.erase(oldFreq);
                }

                freq[nums[j]]++;
                cntfreq[freq[nums[j]]]++;

                if(freq.size() == 1)
                {
                    len = max(len, j - i + 1);
                }
                else if(cntfreq.size() == 2)
                {
                    auto it = cntfreq.begin();

                    int small = it->first;
                    ++it;
                    int large = it->first;

                    if(small * 2 == large)
                    {
                        len = max(len, j - i + 1);
                    }
                }
            }
        }

        return len;
    }
};