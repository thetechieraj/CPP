#include<iostream>
#include<string>

using namespace std;

int main(){
    string s;
    cout << "Enter a String : ";
    getline(cin,s);

    int freq[256] = {0};

    for(int i = 0; i < s.length(); i++){
        freq[(int)s[i]]++;
    }

    int max = 0;

    for(int i = 0; i < 256; i++){
        if(freq[i] > 0){
            cout << (char)i << " : " << freq[i] << "\n";
            if(freq[i] > max){
                max = freq[i];
            }
        }
    }

    cout << "Maximum Frequency : " << max  ;

    return 0;
}