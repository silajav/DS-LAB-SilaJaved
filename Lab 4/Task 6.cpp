#include <iostream>
using namespace std;

void combsort(int arr[], int n){
    int gap=n;
    bool swapped=true;
    int swaps=0,comps=0;
    while(gap!=1 || swapped){
        gap=(gap*10)/13;
        if(gap<1) gap=1;
        swapped=false;
        for(int i=0;i<n-gap;i++){
            comps++;
            if(arr[i]>arr[i+gap]){
                int temp=arr[i];
                arr[i]=arr[i+gap];
                arr[i+gap]=temp;
                swaps++;
                swapped=true;
            }
        }
    }
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    cout<<endl;
    cout<<"comparisons "<<comps<<endl;
    cout<<"swaps "<<swaps<<endl;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    combsort(arr,n);
    return 0;
}
