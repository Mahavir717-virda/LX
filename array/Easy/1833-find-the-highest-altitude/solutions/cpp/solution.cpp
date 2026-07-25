class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int altitude = INT_MIN;
        gain.insert(gain.begin() + 0,0);

        for(auto it : gain ) cout << it << " ";
        for(int i = 0; i < gain.size() - 1; i++)
        {
            gain[i + 1] = gain[i] + gain[i + 1];
            altitude = max(altitude, gain[i]);
        }
        altitude = max(altitude, gain[gain.size() -1]);
        return altitude;
    }
};