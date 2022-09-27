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
    int n;
	ll ans = 0;
    cin >> n;
    ll a[n + 1], s[n + 1];
    memset (a, 0, sizeof (a));
    memset (s, 0, sizeof (s));
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        s[i] += a[i];
        s[i + 1] -= a[i];
    }
    for (int i = 1; i < n; i++)
    {
        if (a[i] > a[i + 1])
        {
            s[1] += a[i + 1] - a[i];
            s[i + 1] -= a[i + 1] - a[i];
            ans += a[i] - a[i + 1];
        }
        if (a[i] < a[i + 1])
        {
            s[i + 1] += a[i] - a[i + 1];
            s[n + 1] -= a[i] - a[i + 1];
            ans += a[i + 1] - a[i];
        }
    }
    for (int i = 1; i <= n; i++)
    {
        s[i] += s[i - 1];
    }
//    for (int i = 1; i <= n; i++)
//    {
//        cout << s[i] << endl;
//    }
    cout<<ans+abs(s[1])<<endl;
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
/*
4 -4 4 -4
-4 -4 4 -4
-4 -4 -4 -12
8+8+8+4
*/
