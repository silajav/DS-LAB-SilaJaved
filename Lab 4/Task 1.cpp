// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int linearsearch(int arr[],int n, int x){
    for (int i=0; i<n; i++){
        if (arr[i]==x){
            cout<<"Found at: "<<i+1<<endl;
            return i;
        }
    }
    cout<<"Not found."<<endl;
    return -1;
    
}
int main() {
    int arr[]={3,4,8,5,2};
    int n= sizeof(arr)/sizeof(0);
    int x;
    cout<<"Enter the value for searching:"<<endl;
    cin>>x;
    linearsearch(arr, n,x);
    

    return 0;
}
