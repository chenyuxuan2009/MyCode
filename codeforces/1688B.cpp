#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n, odd = 0, even = 0, x = 0, minn = INT_MAX;
    long long sum = 0;
    cin >> n;
    int a[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        minn = min (minn, (a[i] & -a[i]));
        if (a[i] % 2 == 1)
        {
            odd++;
        }
        else
        {
            even++;
        }
    }
    if (odd >= 1)
    {
        cout << even << endl;
        return;
    }
    while (minn)
    {
        minn >>= 1;
        x++;
    }
    cout << x - 2 + even << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}

