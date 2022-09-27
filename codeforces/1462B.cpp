#include<bits/stdc++.h>
#define debug(x) cout << "debug:" << #x << "=" << x << "\nline:" << __LINE__ << "\nfunction:" << __FUNCTION__ << '\n';
#define No puts ("No")
#define NO puts ("NO")
#define Yes puts ("Yes")
#define YES puts ("YES")
#define S (x) scanf ("%d", &x)
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
    cin >> n;
    string s;
    cin >> s;
    if (s[0] == '2' && s[1] == '0' && s[2] == '2' && s[3] == '0')
    {
        YES;
    }
    else if (s[0] == '2' && s[1] == '0' && s[2] == '2' && s[n - 1] == '0')
    {
        YES;
    }
    else if (s[0] == '2' && s[1] == '0' && s[n - 2] == '2' && s[n - 1] == '0')
    {
        YES;
    }
    else if (s[0] == '2' && s[n - 3] == '0' && s[n - 2] == '2' && s[n - 1] == '0')
    {
        YES;
    }
    else if (s[n - 4] == '2' && s[n - 3] == '0' && s[n - 2] == '2' && s[n - 1] == '0')
    {
        YES;
    }
    else
    {
        NO;
    }
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

