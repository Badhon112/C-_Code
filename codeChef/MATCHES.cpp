#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int A, B, sum, Ans = 0;
        cin >> A >> B;
        sum = A + B;
        string S;
        S = to_string(sum);
        for (int i = 0; i < S.length(); i++)
        {
            if (S[i] == '0')
            {
                Ans += 6;
            }
            else if (S[i] == '1')
            {
                Ans += 2;
            }
            else if (S[i] == '2')
            {
                Ans += 5;
            }
            else if (S[i] == '3')
            {
                Ans += 5;
            }
            else if (S[i] == '4')
            {
                Ans += 4;
            }
            else if (S[i] == '5')
            {
                Ans += 5;
            }
            else if (S[i] == '6')
            {
                Ans += 6;
            }
            else if (S[i] == '7')
            {
                Ans += 3;
            }
            else if (S[i] == '8')
            {
                Ans += 7;
            }
            else if (S[i] == '9')
            {
                Ans += 6;
            }
        }
        cout << Ans << endl;
    }
}