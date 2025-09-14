#include <iostream>
using namespace std;

void insertionsort(int arr[], int n){
    for(int i=1;i<n;i++){
        int key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}

int binarysearch(int arr[], int n, int x){
    int low=0,high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==x) return mid;
        else if(arr[mid]<x) low=mid+1;
        else high=mid-1;
    }
    return -1;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    insertionsort(arr,n);
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    cout<<endl;
    int x;
    cin>>x;
    int result=binarysearch(arr,n,x);
    if(result!=-1) cout<<"found at index "<<result<<endl;
    else cout<<"not found"<<endl;
    return 0;
}

