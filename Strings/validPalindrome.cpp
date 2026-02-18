#include<iostream>
#include<string>

using namespace std;

bool isAlphaNum(char ch){
    if((ch >= '0' && ch <= '9') || (tolower(ch) >= 'a' && tolower(ch) <= 'z')){
        return true;
    }
    return false;
}

int main(){
    string str;
    cout << "Enter a string : " ;
    getline(cin,str); 

    bool isPalindrome = true;

    int st = 0;
    int end = str.length() - 1;
    
    while(st < end){
        if(!isAlphaNum(str[st])){
            st++; 
            continue;
        }

        if(!isAlphaNum(str[end])){
            end--; 
            continue;
        }

        if(tolower(str[st]) != tolower(str[end])){
            isPalindrome = false;
        }
        st++; 
        end--;
    }

    if(isPalindrome)
        cout << "It is Palindrome." << "\n";

    else
        cout << "It is not Palindrome." << "\n";

    return 0;
}