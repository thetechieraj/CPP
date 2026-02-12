#include<iostream>
#include<string>
using namespace std;

int main(){
    string str = "India is my country.";

    int count = 0;

    //Check if string is empty or not
    if(str.length() == 0){
        cout << "The number of words are : " << count << "\n" ;
        return 0;
    }

    //first word is not space
    if(str[0] != ' ' ){
        count++;
    }

    //Count Words
    for(int i = 0; i < str.length(); i++){
        if(str[i] == ' ' && (str[i+1] >= 'a' && str[i+1] <= 'z')){        //Also use : if (str[i] == ' ' && str[i + 1] != ' ')
            count++;
        }
    }

    cout << "The number of words are : " << count << "\n" ;

    return 0;
}

//Best Version
// #include <iostream>
// #include <sstream>
// using namespace std;

// int main() {

//     string str = " hello   world friends  ";
//     string word;
//     int count = 0;

//     stringstream ss(str);

//     while (ss >> word)   // extracts one word at a time
//         count++;

//     cout << count;

//     return 0;
// }
