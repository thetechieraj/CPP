class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        string ans;
        ans.reserve(s.size() + spaces.size());

        int j = 0;

        for (int i = 0; i < s.size(); i++) {
            if (j < spaces.size() && i == spaces[j]) {
                ans += ' ';
                j++;
            }

            ans += s[i];
        }

        return ans;
    }
};