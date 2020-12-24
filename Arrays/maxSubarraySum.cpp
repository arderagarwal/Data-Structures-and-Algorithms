#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int * arr = new int [n];
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
    int ans=INT_MIN;
    for(int start=0; start<n ; start++){
        for(int end=start; end<n; end++){
            int sum=0;
            for(int itr=start; itr<=end;itr++){
                sum+=arr[itr];
            }
            ans=max(ans,sum);
        }
    }
    cout<<ans;
}
