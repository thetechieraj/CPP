#include<iostream>
#include<vector>
using namespace std;

int maxProfit(vector<int>& prices){
    int buy = INT_MAX;
    int profit = 0;

    for(int i = 0; i < prices.size(); i++){
        if(prices[i] < buy){
            buy = prices[i];
        }
        else if(profit < prices[i] - buy){
            profit = prices[i] - buy;
        }
    }

    return profit;
}

int main(){
    vector<int> nums = {7,1,5,3,6,4};

    cout << maxProfit(nums);

    return 0;
}