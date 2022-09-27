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
ll x[205], y[205], p[205];
ll f[205][205];
int main()
{
    ll n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> x[i] >> y[i] >> p[i];
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            ll s = abs (x[i] - x[j]) + abs (y[i] - y[j]);
            if(s%p[i]==0)f[i][j]=s/p[i];
            else f[i][j]=s/p[i]+1;
        }
    }
//    for (int i = 1; i <= n; i++)
//    {
//        for (int j = 1; j <= n; j++)
//        {
//            cout << f[i][j] << " ";
//        }
//        cout << endl;
//    }
    for (int k = 1; k <= n; k++)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                f[i][j] = min (max (f[i][k], f[k][j]), f[i][j]);
            }
        }
    }
//    for (int i = 1; i <= n; i++)
//    {
//        for (int j = 1; j <= n; j++)
//        {
//            cout << f[i][j] << " ";
//        }
//        cout << endl;
//    }
    ll ans = 1e20;
    for (int i = 1; i <= n; i++)
    {
        ll x = -1e20;
        for (int j = 1; j <= n; j++)
        {
            x = max (f[i][j], x);
        }
        ans = min (ans, x);
    }
    cout << ans << endl;
    return 0;
}
/*
检查：
+1还是-1
多组数据是否清空
int相乘longlong存，有没有*1LL
是否会出现越界爆栈除以0
题目要求模数和写的相等吗
.size()返回无符号，与有符号运算是否出错
*/

