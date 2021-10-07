#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string S;
        int count = 0;
        cin >> S;
        int n = S.length();
        if (n > 10)
        {
            cout << S[0] << n - 2 << S[n - 1] << endl;
        }
        else
        {
            cout << S << endl;
        }
    }
}