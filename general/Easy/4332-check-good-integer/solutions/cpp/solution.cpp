class Solution {
public:
    bool checkGoodInteger(int n) {
        int m = n;
        int dsum = 0, ssum = 0;
        while (m > 0) {
            int temp = m % 10;
            ssum += pow(temp, 2);
            dsum += temp;
            m /= 10;
        }

        cout << dsum << " " << ssum;
        if (ssum - dsum >= 50)
            return true;

        return false;
    }
};