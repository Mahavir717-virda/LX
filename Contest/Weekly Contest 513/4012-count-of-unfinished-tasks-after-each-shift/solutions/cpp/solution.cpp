class Solution {
public:
    vector<int> countTasks(vector<int>& tasks, vector<int>& shifts) {
        int n = tasks.size(), z = 0;
        int rt = 0;

        vector<long long> preft(n, 0);
        preft[0] = tasks[0];
        for (int i = 1; i < n; i++) {
            preft[i] = preft[i - 1] + tasks[i];
        }

        long long total = preft.back();
        long long progress = 0;

        vector<int> ans;
        for (int shift : shifts) {
            progress += shift;

            if (progress >= total) {
                ans.push_back(0);
                progress = 0;
            } else {
                int idx = upper_bound(preft.begin(), preft.end(), progress) -
                          preft.begin();
                ans.push_back(n - idx);
            }
        }
        return ans;
    }
};