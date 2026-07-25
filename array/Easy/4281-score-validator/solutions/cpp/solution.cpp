class Solution {
public:
    vector<int> scoreValidator(vector<string>& events) {
        vector<int> result;
        int counter = 0;
        int score = 0;

        for (int i = 0; i < events.size(); i++) {
            if (events[i] == "1" || events[i] == "2" || events[i] == "3" ||
                events[i] == "4" || events[i] == "0" || events[i] == "6") {
                score = score + stoi(events[i]);
            } else if (events[i] == "W") {
                counter += 1;
            } else if (events[i] == "NB" || events[i] == "WD") {
                score += 1;
            }

            if(counter == 10) break;
        }
        result.push_back(score);
        result.push_back(counter);

        return result;
    }
};