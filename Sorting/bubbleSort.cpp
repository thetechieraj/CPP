#include <iostream>

using namespace std;

void bubbleSort(int arr[], int n){
    bool isSort = false;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n-i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
                isSort = true;
            }
        }
        if(!isSort) break;
    }
}

int main(){
    int arr[] = {20,69,13,5,21,32,15,8};

    int n = sizeof(arr)/sizeof(arr[0]);

    bubbleSort(arr,n);

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    cout << "\n";

    return 0;
}