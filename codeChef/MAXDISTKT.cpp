#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<int, int> &a, pair<int, int> &b)
{
    return a.second < b.second;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<pair<int, int>> Arr;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            Arr.push_back({x, i});
        }
        sort(Arr.begin(), Arr.end());
        int k = 0;
        for (int i = 0; i < n; i++)
        {
            if (Arr[i].first > k)
            {
                Arr[i].first = k;
                k++;
            }
        }
        sort(Arr.begin(), Arr.end(), cmp);
        for (int i = 0; i < n; i++)
        {
            cout << Arr[i].first << " ";
        }
        cout << endl;
    }
}