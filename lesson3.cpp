#include <iostream>
#include <cmath>

using namespace std;


int main()
{
    int a;
    cin >> a;

    float b = sqrt((float)a);
    for (int i = 2; i <= b; ++i)
    {
        if (a % i == 0) {
            cout << "ne prostoe" << endl;
            return 0;
        }
    }
    cout << "prostoe" << endl;

    return 0;
}