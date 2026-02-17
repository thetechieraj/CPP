#include<iostream>
#include<string>

using namespace std;

int main(){
    string str1 = "integra" ;
    string str2 = "triangle" ;

    bool isAnagram = true;

    if(str1.length() != str2.length()){
        isAnagram = false ;
    }

    int freq1[256] = {0};
    int freq2[256] = {0};

    for(int i = 0; i < str1.length(); i++){
        freq1[(int)str1[i]]++;
    }

    for(int i = 0; i < str2.length(); i++){
        freq2[(int)str2[i]]++;
    }

    for(int i = 0; i < 256; i++){
        if(freq1[i] != freq2[i]){
            isAnagram = false;
            break;
        }
    }

    if(isAnagram){
        cout<<"It is Anagram." << "\n";
    }
    else{
        cout<<"It is not Anagram." << "\n";
    }

    return 0;
}


//Improved Version
// #include <iostream>
// #include <string>

// using namespace std;

// int main() {
//     string str1 = "integral";
//     string str2 = "triangle";

//     if (str1.length() != str2.length()) {
//         cout << "It is not Anagram.\n";
//         return 0;
//     }

//     int freq[256] = {0};

//     for (int i = 0; i < str1.length(); i++) {
//         freq[(int)str1[i]]++;
//         freq[(int)str2[i]]--;
//     }

//     bool isAnagram = true;

//     for (int i = 0; i < 256; i++) {
//         if (freq[i] != 0) {
//             isAnagram = false;
//             break;
//         }
//     }

//     cout << (isAnagram ? "It is Anagram.\n" : "It is not Anagram.\n");

//     return 0;
// }