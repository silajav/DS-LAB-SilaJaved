#include <iostream>
using namespace std;

int interpolationsearch(int arr[], int n, int x){
    int low=0,high=n-1;
    while(low<=high && x>=arr[low] && x<=arr[high]){
        if(low==high){
            if(arr[low]==x) return low;
            return -1;
        }
        int pos=low+((x-arr[low])*(high-low))/(arr[high]-arr[low]);
        if(arr[pos]==x) return pos;
        if(arr[pos]<x) low=pos+1;
        else high=pos-1;
    }
    return -1;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    int x;
    cin>>x;
    int result=interpolationsearch(arr,n,x);
    if(result!=-1) cout<<"found at index "<<result<<endl;
    else cout<<"not found"<<endl;
    return 0;
}
