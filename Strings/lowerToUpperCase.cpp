#include<iostream>
#include<string>

using namespace std;

int main(){
    string str = "ConsIstency";

    for(int i = 0; i < str.length(); i++){
        if((int)str[i] > 90){
            str[i] = str[i] - 32;
        }
    }

    cout << str ;

    return 0;
}