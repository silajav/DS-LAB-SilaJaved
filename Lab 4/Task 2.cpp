// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void display(int arr[], int n){
    for (int i=0; i<n; i++){
        cout<<arr[i]<<", ";
    }
    cout<<endl;
}

void bubblesort(int arr[], int n){
    
    for (int i=0; i<n-1; i++){
        bool swapped= false;
        for (int j=0;j<n-i-1; j++){
            if (arr[j+1]<arr[j]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                swapped=true;
            }
        if (!swapped){
            break;
        }    
        }
    }
}
int main() {
    int arr[]={3,4,8,5,2};
    int n= sizeof(arr)/sizeof(arr[0]);
    cout<<"Unsorted: "<<endl;
    display(arr,n);
    bubblesort(arr, n);
    cout<<"Sorted: "<<endl;
    display(arr, n);
    

    return 0;
}
