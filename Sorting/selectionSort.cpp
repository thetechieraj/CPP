#include <iostream>

using namespace std;

void selectionSort(int arr[], int n){
    for(int i = 0; i < n-1; i++){
        int smallestIndex = i;
        for(int j = i+1; j < n; j++){
            if(arr[j] < arr[smallestIndex]){
                smallestIndex = j;
            }
            swap(arr[i],arr[smallestIndex]);
        }
    }
}

int main(){
    int arr[] = {20,69,13,5,21,32,15,8};

    int n = sizeof(arr)/sizeof(arr[0]);

    selectionSort(arr,n);

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    cout << "\n";

    return 0;
}