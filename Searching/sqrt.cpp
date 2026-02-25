#include <iostream>
#include <cmath>   

using namespace std;

int main() {
    long long a;
    cout << "Enter a number: ";
    cin >> a;

    if (a < 0) {
        cout << "Negative numbers cannot be perfect squares." << endl;
        return 0;
    }

    long long root = sqrt(a);

    if (root * root == a) {
        cout << a << " is a Perfect Square." << endl;
    } else {
        cout << a << " is NOT a Perfect Square." << endl;
    }

    return 0;
}

//Alternate without sqrt()
// #include <iostream>
// using namespace std;

// int main() {
//     long long a;
//     cout << "Enter a number: ";
//     cin >> a;

//     if (a < 0) {
//         cout << "Negative numbers cannot be perfect squares." << endl;
//         return 0;
//     }

//     bool isPerfect = false;

//     for (long long i = 0; i * i <= a; i++) {
//         if (i * i == a) {
//             isPerfect = true;
//             break;
//         }
//     }

//     if (isPerfect)
//         cout << a << " is a Perfect Square." << endl;
//     else
//         cout << a << " is NOT a Perfect Square." << endl;

//     return 0;
// }