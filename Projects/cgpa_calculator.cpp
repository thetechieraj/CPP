#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number of semesters : ";
    cin >> n;

    float sgpa[n];
    int credit[n];

    cout << "Enter per semester SGPA and Credit Carefully!" << "\n";

    for(int i = 0; i < n; i++){
        cout << "SGPA of Semester " << i+1 << " : ";
        cin >> sgpa[i];
        cout << "Total Credit in Semester " << i+1 << " : ";
        cin >> credit[i];
    }

    float sgpa_X_credit[n];

    for(int i = 0; i < n; i++){
        sgpa_X_credit[i] = (sgpa[i] * credit[i]) ;
    }

    float total_sgpa_X_credit = 0;
    int total_credit = 0;

    for(int i = 0; i < n; i++){
        total_sgpa_X_credit += sgpa_X_credit[i];
        total_credit += credit[i];
    }

    float cgpa = (total_sgpa_X_credit / total_credit) ;

    cout << "\nCGPA : " << cgpa << "\n"; 

    return 0;
}