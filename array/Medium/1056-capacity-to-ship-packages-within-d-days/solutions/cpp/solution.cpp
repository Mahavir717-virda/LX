class Solution {
public:
    int ship(vector<int>& weights, int capacity) {
        int curr_weight = 0;
        int ship_days = 1; // Start at day 1

        for (int i = 0; i < weights.size(); i++) {
            if (curr_weight + weights[i] > capacity) {
                ship_days += 1;           // Move to the next day
                curr_weight = weights[i]; // Load current item on the new day
            } else {
                curr_weight += weights[i];
            }
        }
        return ship_days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(), weights.end());
        int high = 0;

        for (auto it : weights) {
            high += it;
        }

        cout << " low : " << low << " high : " << high << endl;

        int min_cap = 0;

        while (low <= high) {
            int mid = low + ((high - low) / 2);
            int ship_days = ship(weights, mid);
            cout << "For " << mid << " Capacity " << " ship days are "
                 << ship_days << endl;
            if (days >= ship_days) {
                min_cap = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return min_cap;
    }
};