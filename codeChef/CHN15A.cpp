#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, count = 0;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            arr[i] += k;
        }
        for (int i = 0; i < n; i++)
        {
            if (arr[i] % 7 == 0)
            {
                count++;
            }
        }
        cout << count << endl;
    }
}