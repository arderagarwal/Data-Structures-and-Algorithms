#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> vec;
    for(int i=0; i<10; i++){
        vec.push_back(i);   //for inserting element at the back of vector
    }
    vec.pop_back();   //for removing element from the back
    vec.front();       // for getting element at front of vector
    vec.back();         // for getting element at back of vector
    vec.begin();        //for getting address of begining of the vector
    vec.end();          // for getting address at the end of vector
}
