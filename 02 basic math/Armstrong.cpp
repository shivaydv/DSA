#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int sum = 0;
    int n;
    cout<<"Enter Number"<<endl;
    cin>>n;
	int count = 0;
    int num1=n;
	while(num1>0){	
		num1/=10;
		count++;
	}
    int num2=n;
	while(num2>0){
		int digit = num2%10;
		sum= sum + pow(digit,count);
		num2/=10;
	}

    if(sum==n){
        cout<<"Its Arnstrong NUmber"<<endl;
    }
    else cout<<"Not a Armstrong Number"<<endl;
	
    return 0;
}