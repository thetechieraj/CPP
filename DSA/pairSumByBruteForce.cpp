#include<iostream>
#include<vector>

using namespace std;

vector<int> pairSum(vector<int> nums, int target){
    vector<int> ans ;
    int n = nums.size() ;

    for ( int i = 0 ; i < n ; i++ ){
        for ( int j = i+1 ; j < n ; j++ ){
            if( nums[i] + nums[j] == target ){
                ans.push_back(i) ;
                ans.push_back(j) ;
                return ans ;
            }
        }
    }
    return ans ;
}

int main(){
    vector<int> nums = {2,7,11,15} ;
    int target = 22 ;
     
    vector<int> one =  pairSum(nums, target) ;

    cout << "The indexs are : " << one[0] << " and " << one[1] << "\n" ;

    return 0;
}