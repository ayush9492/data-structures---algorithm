#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(a) / sizeof(a[0]);
    //rotate two times
    int d = 2;
    int p = 1;
    while (p <= d)
    {
        int last = a[0];
        for (int i = 0; i < n - 1; i++)
        {
            a[i] = a[i + 1];
        }
        a[n - 1] = last;
        p++;
    }
    cout << "Array after rotation" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
