class Solution {
public:
    int pascal_triangle(int n, int r) {
        int result = 1;

        for (int i = 0; i < r; i++) {
            result = result * (n - i);
            result = result / (i + 1);
        }

        return result;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> tri(numRows);

        for (int i = 0; i < numRows; i++) {
            for (int j = 0; j <= i; j++) {
                tri[i].push_back(pascal_triangle(i, j));
            }
        }

        return tri;
    }
};