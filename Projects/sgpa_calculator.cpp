#include<iostream>
#include<string>
using namespace std;

int main(){
    int n;
    cout << "Enter the number of subjects : ";
    cin >> n;

    string grade[n];
    int gradePoint[n];
    int creditPoint[n];

    cout << "Enter Grade and Credit Point of each subject.\nBe Carefull!" << "\n";

    for(int i = 0; i < n; i++){
        cout << "Subject " << i+1 << " Grade : ";
        cin >> grade[i]; 
        cout << "Credit Point : ";
        cin >> creditPoint[i];
    }

    for(int i = 0; i < n; i++){
        if(grade[i] == "A+"){
            gradePoint[i] = 10;
        }
        else if(grade[i] == "A"){
            gradePoint[i] = 9;
        }
        else if(grade[i] == "B+"){
            gradePoint[i] = 8;
        }
        else if(grade[i] == "B"){
            gradePoint[i] = 7;
        }
        else if(grade[i] == "C"){
            gradePoint[i] = 6;
        }
        else if(grade[i] == "D"){
            gradePoint[i] = 5;
        }
        else if(grade[i] == "E"){
            gradePoint[i] = 4;
        }
        else{
            gradePoint[i] = 0;
        }
    }
    
    float sum_of_cxg;
    float sum_of_credit_point = 0;

    for(int i = 0 ; i < n; i++){
        sum_of_cxg += (gradePoint[i] * creditPoint[i]) ;
        sum_of_credit_point += creditPoint[i];
    }

    float sgpa = sum_of_cxg / sum_of_credit_point ;

    cout << "\nSGPA = " << sgpa << "\n";

    return 0;
}