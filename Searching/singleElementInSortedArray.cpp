#include<iostream>
#include<vector>
using namespace std;

int singleElement(vector<int> one){
    int s = one.size();

    if(s == 1) return one[0];

    int st = 0, end = s-1;

    while(st <= end){
        int mid = st + (end-st)/2;

        if(mid > 0 && mid < s-1 &&
           one[mid-1] != one[mid] && one[mid] != one[mid+1])
            return one[mid];

        if(mid % 2 == 1){
            if(one[mid] == one[mid-1]) st = mid + 1;
            else end = mid - 1;
        }
        else{
            if(one[mid] == one[mid+1]) st = mid + 2;
            else end = mid - 1;
        }
    }

    return -1;
}

int main(){
    vector<int> one = {1,1,2,2,3,3,5,5,6,8,8,9,9};

    cout << "The single element is : " << singleElement(one) << "\n";

    return 0;
}