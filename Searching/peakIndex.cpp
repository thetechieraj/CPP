#include<iostream>
#include<vector>

using namespace std;

int peakIndex(vector<int> vec){
    int st = 1; 
    int end = vec.size()-2;
    
    while(st <= end){
        int mid = st + (end-st)/2;

        if(vec[mid-1] < vec[mid] && vec[mid] > vec[mid+1]){
            return mid;
        }

        else if(vec[mid-1] < vec[mid]){
            st = mid+1;
        }
        
        else{
            end = mid-1;
        }
    }
    return -1;
}

int main(){
    vector<int> vec = {2,9,8,7,6,5,4,3,2,1};

    cout << "The peak index is : " << peakIndex(vec) << endl;

    return 0;
}