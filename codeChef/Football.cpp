#include <bits/stdc++.h>
using namespace std;
int main()
{
    string S;
    int x = 0, y = 0, z = 0;
    getline(cin, S);
    int n = S.size();
    for (int i = 0; i < n; i++)
    {
        if (S[i] == '1')
        {
            x++;
            y = 0;
        }
        else
        {
            y++;
            x = 0;
        }
        if (x == 7 || y == 7)
        {
            z = 1;
        }
    }
    if (z == 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}