class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        sort(players.begin(), players.end());
        sort(trainers.begin(), trainers.end());

        int left = 0, right = 0, n = players.size(), m = trainers.size(), cnt = 0;

        while(left < n && right < m)
        {
            if(players[left] <= trainers[right])
            {
                cnt++;
                left++;
            }
            right++;
        }

        return cnt;
    }
};