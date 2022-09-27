#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int a[n + 1], ans[n + 1];
    bool f[n + 1] = {}, flag = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i != n)
            {
                if (f[j] == 0 && a[i] != j)
                {
                    flag = 1;
                    f[j] = 1;
                    ans[i] = j;
                    break;
                }
            }
            else if (f[j] == 0)
            {
                f[j] = 1;
                ans[i] = j;
                break;
            }
        }
    }
    if (!flag)
    {
        cout << -1 << endl;
        return;
    }
    for (int i = n; i > 1; i--)
    {
        if (a[i] == ans[i])
        {
            swap (ans[i], ans[i - 1]);
        }
    }
    for (int i = 1; i <= n; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
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

