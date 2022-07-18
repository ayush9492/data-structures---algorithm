#include <bits/stdc++.h>
using namespace std;

int kadanes(int arr[],int length)
{
    int highest_max = 0;
    int currentelementmax = 0;
    for (int i = 0; i < length ;i++)
    {
        currentelementmax = max(arr[i],currentelementmax + arr[i]);
        highest_max = max(highest_max,currentelementmax);
    }
    return highest_max;
}

int main()
{
    cout<<"ENTER THE ARRAY LENGTH: ";
    int length;
    cin>>length;
    int arr[length];
    cout<<"ENTER THE ELEMENTS OF ARRAY: ";
    for (int i = 0; i < length; i++)
    {
        cin>>arr[i];
    }
    cout<<"The maximum sum is : "<<kadanes(arr,length)<<endl;
    return 0;
}