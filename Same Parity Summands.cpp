#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;
        if (k > n)
        {
            cout << "NO" << endl;
        }
        else if (n % 2 != 0 && k % 2 == 0)
        {
            cout << "NO" << endl;
        }
        else if ((n % 2 == 0 && k % 2 == 0) || (n % 2 != 0 && k % 2 != 0))
        {
            cout << "YES" << endl;
            for (int i = 0; i < k - 1; i++)
                cout << "1 ";
            cout << (n - (k - 1)) << endl;
        }
        else if ((n % 2 == 0 && k % 2 != 0))
        {
            if (n <= 2 * (k - 1))
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
                for (int i = 0; i < k - 1; i++)
                    cout << "2 ";
                cout << (n - (k - 1) * 2) << endl;
            }
        }
    }
    return 0;
}