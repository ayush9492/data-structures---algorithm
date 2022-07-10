#include <bits/stdc++.h>
using namespace std;

void fixArray(int arr[], int n)
{
    int temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[j] == i)
            {
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
                break;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != i)
        {
            arr[i] = -1;
        }
    }
    cout << "Array after rearrangement" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int n;
    int arr[] = {-1, -1, 6, 1, 9, 3, 2, -1, 4, -1};
    n = sizeof(arr) / sizeof(arr[0]);
    // function call
    fixArray(arr, n);
    return 0;
}