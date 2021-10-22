#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, s1 = 0, s2 = 0, s3 = 0;
    cin >> t;
    int Arr[100][100];
    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> Arr[i][j];
        }
        s1 += Arr[i][0];
        s2 += Arr[i][1];
        s3 += Arr[i][2];
    }
    if (s1 == 0 && s2 == 0 && s3 == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}