class Solution {
public:
    bool isPrime(int x) {
        if(x <= 1) return false;
        for (int i = 2; i * i <= x; i++) {
            if(x % i == 0)
            {
                return false;
            }
        }

       
        return true;
    }
    int sumOfPrimesInRange(int n) {
        int r = 0, sum = 0;
        int temp = n;

        while (temp > 0) {
            int temp2 = temp % 10;
            r = temp2 + (r * 10);
            temp /= 10;
        }

        for (int i = min(n,r); i <= max(n,r); i++) {
            if (isPrime(i)) {
                sum += i;
            }
        }

        return sum;
    }
};