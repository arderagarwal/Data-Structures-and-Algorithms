#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n; //Taking the number of numbers as input
    int currentSum=0;
    int maxSum=INT_MIN;
    while(n--){
        int x;
        cin>>x;             // Taking input of N numbers one by one
        currentSum+=x;
        if(currentSum>maxSum){
            maxSum=currentSum;
        }
        if(currentSum<0){
            currentSum=0;
        }
    }
    cout<<"Maximum sum is "<<maxSum;
}

