#include <iostream>
using namespace std;

int* addition(int arr[], int brr[], int x, int y, int &resultSize) {
    int i = x - 1;
    int j = y - 1;
    int k = x - 1;

    int* ans = new int[x];
    int carry = 0;

    // Add corresponding digits from both arrays
    while (j >= 0) {
        int sum = arr[i] + brr[j] + carry;
        ans[k] = sum % 10;
        carry = sum / 10;
        j--;
        k--;
        i--;
    }

    // Add remaining digits from the larger number
    while (i >= 0) {
        int sum = arr[i] + carry;
        ans[k] = sum % 10;
        carry = sum / 10;
        k--;
        i--;
    }

    // If carry remains, create a new array with one extra digit
    if (carry == 1) {
        int* bans = new int[x + 1];
        bans[0] = 1;
        for (int p = 0; p < x; p++) {
            bans[p + 1] = ans[p];
        }
        delete[] ans;
        resultSize = x + 1;
        return bans;
    }

    resultSize = x;
    return ans;
}

int* calSum(int one[], int two[], int m, int n, int &resultSize) {
    if (m >= n) {
        return addition(one, two, m, n, resultSize);
    } else {
        return addition(two, one, n, m, resultSize);
    }
}

int main() {   
    int m, n;

    cout << "Enter size of first array: ";
    cin >> m;
    int* one = new int[m];
    cout << "Enter elements of first array: ";
    for (int i = 0; i < m; i++) {
        cin >> one[i];
    }

    cout << "Enter size of second array: ";
    cin >> n;
    int* two = new int[n];
    cout << "Enter elements of second array: ";
    for (int i = 0; i < n; i++) {
        cin >> two[i];
    }

    int resultSize;
    int* result = calSum(one, two, m, n, resultSize);

    cout << "Result: ";
    for (int i = 0; i < resultSize; i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    delete[] one;
    delete[] two;
    delete[] result;

    return 0;
}