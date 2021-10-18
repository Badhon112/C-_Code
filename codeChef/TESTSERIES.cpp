#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int arr[5];
        int india = 0, england = 0;
        for (int i = 0; i < 5; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < 5; i++)
        {
            if (arr[i] == 2)
            {
                england++;
            }
            else if (arr[i] == 1)
                india++;

            else if (arr[i] == 0)
            {
                india++;
                england++;
            }
        }
        if (india > england)
        {
            cout << "INDIA" << endl;
        }
        else if (india == england)
        {
            cout << "DRAW" << endl;
        }
        else
        {
            cout << "ENGLAND" << endl;
        }
    }
}