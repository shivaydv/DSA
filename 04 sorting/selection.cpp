#include <bits/stdc++.h>
using namespace std;
void sort(int arr[], int len)
{
    for (int i = 0; i < len - 1; i++)
    {
        int min = i;
        for (int j = i; j < len; j++)
        {
            if (arr[j] < arr[min])
                min = j;
        }
        if (i != min)
        {
            int temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }
}
int main()
{
    int arr[] = {1, 5, 4, 56, 86, 12, 36, 45};
    int len = sizeof(arr) / sizeof(arr[0]);
    cout<<"Before Sorting"<<endl;
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    sort(arr, len);

    cout<<"After Sorting \n";
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// time compexity = O(n^2) || n*(n+1)/2