#include <bits/stdc++.h>
using namespace std;
int main()
{
    int count = 0;
    string S;
    getline(cin, S);
    sort(S.begin(), S.end());
    for (int i = 0; i < S.length(); i++)
    {
        if (S[i] != S[i + 1])
        {
            count++;
        }
    }
    if (count % 2 == 0)
    {
        cout << "CHAT WITH HER!" << endl;
    }
    else
    {
        cout << "IGNORE HIM!" << endl;
    }
}