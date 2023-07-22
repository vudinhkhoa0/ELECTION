#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int n, k, tmax = -1,a[101];
        cin >> n >> k;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            if (tmax < a[i]) tmax = a[i];
        }
        for (int i =1 ; i <= n; i++)
        {
            k = k - (tmax - a[i]);
        }
        if (k >= 0 && k % n == 0) cout << "YES";
        else cout << "NO";
        cout << endl;
    }
    return 0;

}

