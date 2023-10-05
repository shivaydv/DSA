#include<bits/stdc++.h>
using namespace std;

// printing from n to 1;
void f(int i,int n){

    if(i>n) return;
    f(i+1,n);
    cout<<i<<endl;
}

int main(){

    int n;
    cin>>n;
    f(1,n);
    return 0;
}