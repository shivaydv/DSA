#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter Number"<<endl;
    cin>>n;
    int count=0;
    while(n!=0){
        // int digit =n%10;
        count ++;
        n/=10;
    }
    cout<<count<<endl;

    return 0;
}
// time complexity = O(log base 10 (n))

//advanced way to count the digits 
// int count = (int)(log(n)+1);

