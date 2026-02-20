#include<iostream>
#include<string>

using namespace std;

bool isFreqSame(int arr1[], int arr2[]){
    for(int i = 0; i < 26; i++){
        if(arr1[i] != arr2[i]){
            return false;
        }
    }
    return true;
}

int main(){
    string s1 = "abc";
    string s2 = "eidcaoobaco";

    bool isInclude = false;

    int freq[26] = {0};  

    for(int i = 0; i < s1.length(); i++){
        freq[s1[i] - 'a']++;
    }

    int winSize = s1.length();

    for(int i = 0 ; i <= s2.length() - winSize; i++){   
        int winIdx = 0, idx = i;
        int winFreq[26] = {0};

        while(winIdx < winSize){
            winFreq[s2[idx]-'a']++;
            winIdx++;
            idx++; 
        }

        if(isFreqSame(freq, winFreq)){
            isInclude = true;
            break;  
        }
    }
    
    if(isInclude){
        cout << "Yes" << "\n";
    }
    else{
        cout << "No" << "\n";   // FIXED
    }

    return 0;
}

//BEST OPTIMISED VERSION O(N) TIME COMPLEXITY
// class Solution {
// public:
//     bool checkInclusion(string s1, string s2) {

//         int n = s1.length();
//         int m = s2.length();

//         if(n > m) return false;

//         int freq1[26] = {0};
//         int freq2[26] = {0};

//         // Step 1: Frequency of s1
//         for(int i = 0; i < n; i++){
//             freq1[s1[i] - 'a']++;
//             freq2[s2[i] - 'a']++;   // first window
//         }

//         // Step 2: Compare first window
//         if(equal(begin(freq1), end(freq1), begin(freq2)))
//             return true;

//         // Step 3: Slide window
//         for(int i = n; i < m; i++){

//             // Add new character
//             freq2[s2[i] - 'a']++;

//             // Remove leftmost character
//             freq2[s2[i - n] - 'a']--;

//             // Compare arrays
//             if(equal(begin(freq1), end(freq1), begin(freq2)))
//                 return true;
//         }

//         return false;
//     }
// };