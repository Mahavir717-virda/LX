class Solution {
public:
    long long sumAndMultiply(int n) {
        long long sum = 0;
        long long x = 0, y = 0, temp = 0;
        while (n > 0) {
            temp = n % 10;
            n /= 10;
            if (temp == 0) {
                continue;
            }
            y = temp + (y * 10);
        }

        long long m = y;
        y = 0;
        while (m > 0) {
            temp = m % 10;
            m /= 10;
            if (temp == 0) {
                continue;
            }
            y = temp + (y * 10);
        }

        x = y;
        while (x > 0) {
            temp = x % 10;
            sum += temp;
            x /= 10;
        }

        return sum * y;
    }
};