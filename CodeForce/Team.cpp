#include <bits/stdc++.h>
using namespace std;
#define ll long long int;
int main()
{
    int t, count = 0;
    cin >> t;

    while (t--)
    {
        int p, v, t;
        cin >> p >> v >> t;
        if ((p + v == 2) || (p + t == 2) || (v + t == 2))
        {
            count += 1;
        }
    }
    cout << count << endl;
}