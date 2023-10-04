#include<bits/stdc++.h>
using namespace std;

int main(){

  int n;
    cout<<"Enter Number"<<endl;
    cin>>n;

vector<int> ans;

for (int i=1;i*i<=n;i++){
    if(n%i==0){
        // cout<<i<<endl;
        ans.push_back(i);
        if((n/i)!=i) ans.push_back(n/i);
    }
}

sort(ans.begin(),ans.end());

for(auto i:ans){
    cout << i << " ";
}
    return 0;
}