#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter Number"<<endl;
    cin>>n;
    int count =0;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            count++;
            if((n/i)!=i){
                count++;
            }
        }
    }

    if(count==2) cout<<"prime number"<<endl;
    else cout<<"not a prime"<<endl;
    return 0;
}