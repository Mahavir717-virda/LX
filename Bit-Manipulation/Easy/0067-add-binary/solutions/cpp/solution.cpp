class Solution {
public:
    string addBinary(string a, string b) {
        string result = "";
        int i = a.length() - 1;
        int j = b.length() - 1;
        int carry = 0;

        while (i >= 0 || j >= 0 || carry > 0) {
            int sum = carry;

            if (i >= 0) {
                sum += a[i] - '0'; 
                i--;
            }
            if (j >= 0) {
                sum += b[j] - '0'; // Convert char to int
                j--;
            }

            // Append the binary digit (0 or 1) to the result string
            result += to_string(sum % 2);
            
            // Calculate the new carry (1 if sum >= 2, else 0)
            carry = sum / 2;
        }

        // Since we added digits from right to left, reverse the result
        reverse(result.begin(), result.end());
        return result;
    }
};
