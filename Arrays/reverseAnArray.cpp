#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int* arr = new int[n];
   for(int i=0; i<n;i++){
        cin>>arr[i]; //Taking input of the Array
    }
    for(int i=0; i<n/2;i++){
        swap(arr[i],arr[n-i-1]);    //Actual Algorithm of reversing an Array
    }
     for(int i=0; i<n;i++){
        cout<<arr[i]<<" ";
    }
    reverse(arr,arr+n);
    for(int i=0; i<n;i++){
       cout<<arr[i]<<" ";
   }
}

