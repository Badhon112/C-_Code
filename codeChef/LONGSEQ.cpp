#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        bool Ans = true;
        int x = 0, y = 0;
        string n;
        cin >> n;
        for (int i = 0; i < n.length(); i++)
        {
            if (n[i] == '1')
            {
                x++;
            }
            else
            {
                y++;
            }
        }
        int v = n.length();
        if ((x == v - 1 && y == 1) || y == v - 1 && x == 1)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
}