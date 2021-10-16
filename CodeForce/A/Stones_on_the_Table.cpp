#include <bits/stdc++.h>
using namespace std;
int main()
{
    int R, G, B;
    int t;
    cin >> t;
    char Array[t];

    for (int i = 1; i <= t; i++)
    {
        cin >> Array[i];
    }
    int count = 0;
    for (int i = 1; i <= t; i++)
    {
        if (Array[i] == Array[i + 1])
        {
            count++;
        }
    }
    cout << count << endl;
}