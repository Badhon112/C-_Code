#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b, ans;
        cin >> a >> b;
        for (int i = 0; i < a; i += 2)
        {
            if (i % 2 == 0)
            {

                ans += pow(i, b);
            }
        }
        cout << ans << endl;
    }
}