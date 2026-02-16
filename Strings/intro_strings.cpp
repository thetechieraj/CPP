#include<iostream>
using namespace std;

int main(){
    string str1,str2;     //Declaration 

    cout << "Enter a string : " ;

    getline(cin,str1);     //For take input the whole sentence

    cout << "Output : " << str1<< "\n" ;

    cout << "Enter a string  : " ;

    getline(cin,str2,'.');     // For take input till argument

    cout << "Output : " << str2 << "\n" ;
    
    return 0;
}