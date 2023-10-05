#include<bits/stdc++.h>
using namespace std;

bool palin(int i,string s,int n){
   
    if(i>n/2) return true;
    if(s[i]!=s[n-i-1]) return false;
    return palin(i+1,s,n);
}

int main(){
    string s;
    cin>>s;
     int n=s.size();
    int ans =palin(0,s,n);
    if(ans==true) cout<<"Palindrome"<<endl;
    else cout<<"not a palindrome"<<endl;
}