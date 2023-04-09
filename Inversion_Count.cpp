#include <bits/stdc++.h>
using namespace std;
int n, m;
int b[500020];
int c[500020];
void change (int x, int y)
{
    for (int i = x; i <= n; i += i & -i)
    {
        c[i] += y;
    }
}
int query (int x)
{
    int re = 0;
    for (int i = x; i > 0; i -= i & -i)
    {
        re += c[i];
    }
    return re;
}
void solve()
{
    scanf ("%d", &n);
    m = n;
    int a[n + 1];
    memset (c, 0, sizeof (c));
    for (int i = 0; i < n; i++)
    {
        scanf ("%d", &a[i]);
        b[i] = a[i];
    }
    sort (b, b + m);
    m = unique (b, b + m) - b;
    for (int i = 0; i < n; i++)
    {
        a[i] = lower_bound (b, b + m, a[i]) - b + 1;
    }
    long long ans = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        ans += query (a[i]);
        change (a[i], 1);
    }
    cout << ans << endl;
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
