#include <iostream>
#include <time.h>
using namespace std;

void main()
{
    srand(time(0));
    const int r = 5, c = 5;
    int a[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            a[i][j] = rand() % 10;
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "\n";

    for (int k = 0; k < r; k++)
    {
        for (int i = 0; i < c; i++)
        {
            for (int j = r - 1; j > i; j--)
                if (a[k][j] < a[k][j - 1])
                {
                    int t = a[k][j];
                    a[k][j] = a[k][j - 1];
                    a[k][j - 1] = t;

                }
            cout << a[k][i] << " ";
        }
        cout << "\n";
    }
}