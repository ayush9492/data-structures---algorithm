#include <bits/stdc++.h>
using namespace std;
#define R 4
#define C 4

void spiralPrint(int m, int n, int a[R][C])
{
    int i, k = 0, l = 0;

    /* k - starting row index
        m - ending row index
        l - starting column index
        n - ending column index
        i - iterator
    */

    while (k < m && l < n)
    {
        // Print first row from remaining rows
        for (int i = l; i < n; i++)
        {
            printf("%d", a[k][i]);
        }
        k++;

        // Print last column from remaining columns
        for (int i = k; i < m; i++)
        {
            printf("%d", a[i][n - 1]);
        }
        n--;

        // Print last rows for remaining rows
        if (k < m)
        {
            for (int i = n - 1; i < 1; i--)
            {
                printf("%d", a[m - 1][i]);
            }
            m--;
        }

        // print last column for every column
        if (l < n)
        {
            for (int i = m - 1; i >= k; i--)
            {
                printf("%d", a[i][l]);
            }
            l++;
        }
    }
}
int main()
{
    int a[R][C] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    // function call
    spiralPrint(R, C, a);
    return 0;
}