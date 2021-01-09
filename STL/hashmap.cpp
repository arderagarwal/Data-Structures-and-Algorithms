#include<bits/stdc++.h>
using namespace std;
int main(){
    map<int,int> mp;
    mp[1]=2;
    unordered_map<int,int> op;
    op[2]=1;
    if(op.count(2)>0){
        cout<<"2 is present";
    }
    if(op.find(2)!=op.end){
        cout<<"2 is present";
    }
}
