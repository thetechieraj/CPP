#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    vector<string> ans;

    void backtrack(int idx, string &digits, vector<string> &mapping, string &curr){
        if(idx == digits.size()){
            ans.push_back(curr);
            return;
        }

        string letters = mapping[digits[idx] - '0'];

        for(char ch : letters){
            curr.push_back(ch);
            backtrack(idx + 1, digits, mapping, curr);
            curr.pop_back();
        }
    }

    vector<string> letterCombinations(string digits){
        if(digits.empty()){
            return {};
        }

        vector<string> mapping = {
            "", "", "abc", "def", "ghi",
            "jkl", "mno", "pqrs", "tuv", "wxyz"
        };

        string curr;
        backtrack(0, digits, mapping, curr);

        return ans;
    }
};