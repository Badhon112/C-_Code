#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        getline(cin, s);
        int n = s.size();
        vector<int> f(26);
        for (int i = 0; i < n; i++)
        {
            int num = s[i] - 'a';
            f[num]++;
        }
    }

} //Wrong Ans;