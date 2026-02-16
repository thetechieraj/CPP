#include<iostream>
#include<string>

using namespace std;

int main(){
    string s = "is are one me gy hu di uo so" ;

    int words = 0;

    if(s[0] != ' '){
        words++;
    }
    
    for(int i = 0; i < s.length() ; i++ ){
        if(s[i] == ' ' && s[i+1] != ' '){
            words++;
        }
    }

    cout << "The number of words are : " << words << "\n" ;

    return 0;
} 