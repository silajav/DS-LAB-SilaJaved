#include <iostream>
using namespace std;

void shellsort(int arr[], int n){
    for (int gap = n/2; gap > 0; gap /= 2){
        for (int i = gap; i < n; i++){
            int temp = arr[i];
            int j = i;
            while (j >= gap && arr[j - gap] > temp){
                arr[j] = arr[j - gap];
                j -= gap;
            }
            arr[j] = temp;
        }
    }
}

void display(int arr[], int n){
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int arr[] = {34, 8, 64, 51, 32, 21};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "unsorted: ";
    display(arr, n);

    shellsort(arr, n);

    cout << "sorted: ";
    display(arr, n);

    return 0;
}
