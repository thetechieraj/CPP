#include<iostream>
#include<vector>
using namespace std;

vector<int> pairSum(int target , vector<int> nums){
    vector<int> ans ;
    int n = nums.size() ;

    int i = 0 , j = n-1 ; 

    while(i<j){
        int pairSum = nums[i] + nums[j] ;
        
        if(pairSum < target){
            i++ ;
        }
        else if(pairSum > target){
            j-- ;
        }
        else{
            ans.push_back(i) ;
            ans.push_back(j) ;
            return ans;
        }
    }
    return ans ;
}


int main(){
    vector<int> nums = {4,6,8,9,5};
    int target = 17;

    vector<int> final = pairSum(target,nums) ;

    cout << "The indexes are : " << final[0] << " and " << final[1] << "\n" ;

    return 0;
}