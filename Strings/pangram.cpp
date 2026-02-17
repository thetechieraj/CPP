#include<iostream>
#include<string>

using namespace std;

int main(){
    string str = "the quick brown fox jumps over a lazy dog";

    int freq[256] = {0};

    //For storing the freqencies of character
    for(int i = 0; i<str.length(); i++){
        freq[(int)str[i]]++;
    }

    bool isPangram = true;

    for(int i = 97; i <= 122; i++){
        if(freq[i] == 0){
            isPangram = false;
            break;
        }
    }

    if(isPangram){
        cout<<"It is Pangram." << "\n";
    }
    else{
        cout<<"It is not Pangram." << "\n";
    }

    return 0;
}


// Best optimized version
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

//     for (int i = 0; i < 256; i++) {
//         if (freq[i] != 0) {
//             cout << "It is not Anagram.\n";
//             return 0;
//         }
//     }

//     cout << "It is Anagram.\n";

//     return 0;
// }



//Better & Cleaner Version
// #include <iostream>
// #include <string>
// #include <cctype>

// using namespace std;

// int main() {
//     string str = "The quick brown fox jumps over a lazy dog";

//     int freq[26] = {0};

//     for (char ch : str) {
//         if (isalpha(ch)) {
//             ch = tolower(ch);
//             freq[ch - 'a']++;
//         }
//     }

//     bool isPangram = true;

//     for (int i = 0; i < 26; i++) {
//         if (freq[i] == 0) {
//             isPangram = false;
//             break;
//         }
//     }

//     cout << (isPangram ? "It is a pangram." : "It is not a pangram.") << endl;

//     return 0;
// }