#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, m, a, sum;
    cin >> n >> m >> a;
    sum = n % a == 0 ? n / a : n / a + 1;
    sum = sum * (m % a == 0 ? m / a : m / a + 1);
    cout << sum << endl;
}
