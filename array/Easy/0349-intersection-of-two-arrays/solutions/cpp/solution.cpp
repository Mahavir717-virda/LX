class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size(), n2 = nums2.size();
        set<int> s;

        unordered_map<int,int> mp1;
        unordered_map<int,int> mp2;

        for(int i = 0;i<n1;i++)
        {
            mp1[nums1[i]]++;
        }

        for(int i = 0;i<n2;i++)
        {
            mp2[nums2[i]]++;
        }

        for(int i = 0;i<n2;i++)
        {
            if(mp2.find(nums2[i]) != mp2.end() && mp1.find(nums2[i]) != mp1.end())
            {
                s.insert(nums2[i]);
            }
        }

        vector<int> ans;
        for(auto it : s)
        {
            ans.push_back(it);
        }

        return ans;
    }
};