#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,targetsum;
    cin>>n>>targetsum;
    int * arr = new int[n];
    for(int i=0 ;i<n; i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int start=0;
    int end=n-1;
    while(start<end){
        if(arr[start]+arr[end]==targetsum){
            cout<<arr[start]<<" "<<arr[end];
            return 0;
        }
        else if(arr[start]+arr[end]>targetsum){
            end--;
        }
        else{
            start++;
        }
    }
    cout<<"not found";
}

