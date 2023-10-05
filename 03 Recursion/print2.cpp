#include<bits/stdc++.h>
using namespace std;

// printing from name n times;
void f(int n){

    if(n==0) return;
    cout<<"Shiva"<<endl;
    f(n-1);
}

int main(){

    int n;
    cin>>n;
    f(n);
    return 0;
}