class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> scores;
        int sum = 0;

        for (const string& op : operations) {
            if (op == "C") {
                sum -= scores.back();
                scores.pop_back();
            }
            else if (op == "D") {
                int score = 2 * scores.back();
                scores.push_back(score);
                sum += score;
            }
            else if (op == "+") {
                int n = scores.size();
                int score = scores[n - 1] + scores[n - 2];
                scores.push_back(score);
                sum += score;
            }
            else {
                int score = stoi(op);
                scores.push_back(score);
                sum += score;
            }
        }

        return sum;
    }
};
