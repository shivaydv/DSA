#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter Number"<<endl;
    cin>>n;
    int rev;
    while(n!=0){
        rev=(rev*10)+(n%10);
        n/=10;
    }

    cout<<rev<<endl;

    return 0;
}