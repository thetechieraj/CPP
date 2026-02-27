#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    int n;
    cout << "Enter size: ";
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    cout << "Unique elements: ";

    for(int i = 0; i < n; i++){

        int count = 1;

        while(i + 1 < n && arr[i] == arr[i + 1]){
            count++;
            i++;
        }

        if(count == 1){
            cout << arr[i] << " ";
        }
    }

    return 0;
}



// #include<iostream>
// #include<vector>

// using namespace std;

// vector<int> uniqueElement(const vector<int> &arr){
//     vector<int> ans;

//     int freq[256] = {0};

//     for(int i = 0; i < arr.size(); i++){
//         freq[arr[i]]++;
//     }

//     for(int i = 0; i < 256; i++){
//         if(freq[i] == 1){
//             ans.push_back(i);
//         }
//     }

//     return ans;
// }

// int main(){
//     int n;
//     cout << "Enter the number : ";
//     cin >> n;

//     vector<int> v(n);

//     for(int i = 0; i < n; i++){
//         cin >> v[i];
//     }

//     vector<int> result = uniqueElement(v);

//     cout << "answer : " ;

//     for(int x : result){
//         cout << x << " ";
//     }

//     return 0;
// }