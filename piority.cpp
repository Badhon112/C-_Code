#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, pos, t, AWT, ATAT;
    cout << "Enter Processor number";
    cin >> n;
    int B_T[n], P_R[n], W_T[n], T_T[n];
    cout << "Enter Burst Time and Piotity" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> B_T[i];
        cin >> P_R[i];
    }
    for (int i = 0; i < n; i++)
    {
        pos = i;
        for (int j = i + 1; j < n; j++)
        {
            if (P_R[j] < P_R[pos])
            {
                pos = j;
            }
        }
        t = P_R[i];
        P_R[i] = P_R[pos];
        P_R[pos] = t;

        t = B_T[i];
        B_T[i] = B_T[pos];
        B_T[pos] = t;
    }
    W_T[0] = 0;
    cout << "Process \t Burst Time \t Priority Time Weating \t Turn around Time" << endl;
    for (int i = 0; i < n; i++)
    {
        W_T[0] = 0;
        T_T[0] = 0;
        for (int j = 0; i < i; j++)
        {
            W_T[i] = W_T[i] + B_T[i];
        }
        T_T[i] = W_T[i] + B_T[i];
        AWT = AWT + W_T[i];
        ATAT = ATAT + T_T[i];
        cout << i + 1 << "\t" << B_T[i] << "\t" << P_R[i] << "\t" << W_T[i] << "\t" << T_T[i] << endl;
    }
    cout << "Average Wating time " << AWT / n << endl;
    cout << "Average Turn Around time " << ATAT / n << endl;
}