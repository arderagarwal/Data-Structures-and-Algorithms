/* Time Complexity O(N)
   Space COmplexity O(N) */
int Solution::trap(const vector<int> &A) {
    vector<int> B(A.size(),0);
    vector<int> C(A.size(),0);
    int maxl=INT_MIN;
    int maxr=INT_MIN;
    for(int i=0; i<A.size();i++){
        B[i]=max(maxl,A[i]);
        maxl=B[i];
        C[A.size()-i-1]=max(maxr,A[A.size()-i-1]);
        maxr=C[A.size()-i-1];
    }
    int ans=0;
    for(int i=0;i<A.size();i++){
        int a= (min(B[i],C[i])-A[i]);
       if(a>0){
           ans=ans+a;
       }
    }
    return ans;
}
