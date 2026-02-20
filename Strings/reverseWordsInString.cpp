#include<iostream>
#include<string>
#include <algorithm>

using namespace std;

int main(){
    string one = "If you are Dreaming. Make sure you dream Big.";

    int size = one.length();
    string ans = "";

    reverse(one.begin(),one.end());

    for(int i = 0; i < size; i++){
        string word = "";
        while(i < size && one[i] != ' '){
            word += one[i];
            i++;
        }

        reverse(word.begin(),word.end());

        if(word.length() > 0){
            ans += " " + word;
        }
    }
    string res = ans.substr(1);

    cout << res << "\n";

    return 0;
}