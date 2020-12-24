#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int * arr = new int [n];
    int * pre = new int [n+1];
    //O(N^2) Approach
    pre[0]=0;
    for(int i=0; i<n;i++){
        cin>>arr[i];
        pre[i+1]=pre[i]+arr[i];
    }
    int ans=INT_MIN;
    for(int i=0 ; i<n+1;i++){
        for(int j=i+1; j<n+1;j++){
            ans=max(ans,pre[j]-pre[i]);
        }
    }
    cout<<ans<<endl;
    //O(N^3) Approach
    ans=INT_MIN;
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
