#include<bits/stdc++.h>
#define debug(x) cout << "debug:" << #x << "=" << x << "\nline:" << __LINE__ << "\nfunction:" << __FUNCTION__ << '\n';
#define No puts ("No")
#define NO puts ("NO")
#define Yes puts ("Yes")
#define YES puts ("YES")
#define S (x) scanf ("%d", &x)
#define C (x,c) cout << x << c
#define fi first
#define se second
#define pb push_back
#define endl '\n'
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
const ll mod = 998244353;
void solve()
{
    int n, s, s1 = 0, s2 = 0, i, j, ans = -1;
    cin >> n >> s;
    int a[n + 1];
    for (i = 1; i <= n; i++)
    {
        cin >> a[i];
        s1 += a[i];
        s2 += a[i];
    }
    for (i = 1; i <= n; i++)
    {
        s1 -= a[i];
        if (s1 == s)
        {
            break;
        }
    }
    for (j = n; j >= 1; j--)
    {
        s2 -= a[i];
        if (s2 == s)
        {
            break;
        }
    }
    ans = min (j, n -i);
    if (s2 != s && s1 != s)
    {
        ans = -1;
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
