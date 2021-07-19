//Problem 1546A
//A. AquaMoon and Two Arrays

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ll testCase;
    cin >> testCase;
    while (testCase--)
    {
        int n;
        cin >> n;
        int A[n], B[n];
        int sumA, sumB;
        sumA = sumB = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
            sumA += A[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> B[i];
            sumB += B[i];
        }
        if (sumA != sumB)
        {
            cout << -1 << endl;
            continue;
        }
        vector<int> ii, jj;
        for (int i = 0; i < n - 1; i++)
        {
            if (A[i] > B[i])
            {
                for (int j = 0; j < n; j++)
                {
                    if (A[j] < B[j] && A[i] != B[i])
                    {
                        ii.push_back(i + 1);
                        jj.push_back(j + 1);
                        A[i]--;
                        A[j]++;
                        j--;
                    }
                }
            }
        }
        cout << ii.size() << endl;
        for (int i = 0; i < ii.size(); i++)
        {
            cout << ii[i] << " " << jj[i] << endl;
        }
    }
    return 0;
}
