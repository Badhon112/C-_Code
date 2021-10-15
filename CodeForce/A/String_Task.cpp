#include <bits/stdc++.h>
using namespace std;
int main()
{
    string S, S1;
    getline(cin, S);
    int x = S.length();
    for (int i = 0; i < x; i++)
    {
        if (S[i] == 'a' || S[i] == 'A' || S[i] == 'e' || S[i] == 'E' || S[i] == 'O' || S[i] == 'o' || S[i] == 'i' || S[i] == 'I' || S[i] == 'u' || S[i] == 'U' || S[i] == 'y' || S[i] == 'Y')
        {
            continue;
        }
        else
        {
            S1 += '.';
            S1 += towlower(S[i]);
        }
    }
    cout << S1 << endl;
}