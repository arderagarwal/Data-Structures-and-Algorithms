#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int * arr = new int [n];
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
    for(int start=0; start<n ; start++){
        for(int end=start; end<n; end++){
            for(int itr=start; itr<=end;itr++){
                cout<<arr[itr];
            }
            cout<<endl;
        }
    }
}
