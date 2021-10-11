#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, x = 0;
    cin >> t;
    string arr;
    for (int i = 0; i < t; i++)
    {
        cin >> arr;
        if (arr[1] == '+')
        {
            x++;
        }
        else
        {
            x--;
        }
    }
    cout << x << endl;
}