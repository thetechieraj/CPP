#include<iostream>
#include<string>
using namespace std;

int main(){
    string str = "AI is the electricity of our age.";

    int freq[256] = {0};

    for(int i = 0 ; i < str.length() ; i++){
        freq[(int)str[i]]++;
    }

    for(int i = 0 ; i < 256 ; i++){
        if(freq[i] > 0){
            cout << (char)i << " : " << freq[i] << "\n";
        }
    }

    return 0;
}