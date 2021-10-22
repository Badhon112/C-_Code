#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long k, n, w, ans = 0;
    cin >> k >> n >> w;
    ans = (w * (k + w * k)) / 2;
    if (ans > n)
        cout << ans - n << endl;
    else
    {
        cout << "0" << endl;
    }
}