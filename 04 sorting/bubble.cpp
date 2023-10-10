#include <bits/stdc++.h>
using namespace std;
void sort(int arr[], int len)
{
    for(int i=0;i<len;i++){
        bool sorted=true;
        for(int j=0;j<len-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                sorted=false;
            }
        }
        if(sorted) break;
    }
}
int main()
{
    int arr[] = {1,2,3};
    int len = sizeof(arr) / sizeof(arr[0]);
    cout<<"Before Sorting"<<endl;
    for (int i = 0; i < len; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    sort(arr, len);
    cout<<"After Sorting \n";
    for (int i = 0; i < len; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
