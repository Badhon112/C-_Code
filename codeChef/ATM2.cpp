#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string S;
        int N, K, sum = 0;
        ;
        cin >> N >> K;
        int Arr[N];
        for (int i = 0; i < N; i++)
        {
            cin >> Arr[i];
        }
        for (int i = 0; i < N; i++)
        {
            if (Arr[i] <= K)
            {
                S += '1';
                K = K - Arr[i];
            }
            else
            {
                S += '0';
            }
        }
        cout << S << endl;
    }
}