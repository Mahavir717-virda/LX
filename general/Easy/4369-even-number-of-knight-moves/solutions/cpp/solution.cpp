class Solution {
public:
    bool canReach(vector<int>& start, vector<int>& target) {
        int s = (start[0] +start[1]) % 2;
        int e = (target[0] + target[1]) % 2;

        return s == e;
    }
};