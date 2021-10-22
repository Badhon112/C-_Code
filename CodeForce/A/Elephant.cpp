#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, n;
    cin >> n;
    x = n / 5;
    if (n % 5 == 0)
    {
        cout << x << endl;
    }
    else
    {
        cout << x + 1 << endl;
    }
}