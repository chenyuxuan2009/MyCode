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
    if (n % 3 == 0)
    {
        printf ("%d %d %d\n", n / 3, n / 3 + 1, n / 3 - 1);
    }
    if (n % 3 == 1)
    {
        printf ("%d %d %d\n", n / 3, n / 3 + 2, n / 3 - 1);
    }
    if (n % 3 == 2)
    {
        printf ("%d %d %d\n", n / 3 + 1, n / 3 + 2, n / 3 - 1);
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

