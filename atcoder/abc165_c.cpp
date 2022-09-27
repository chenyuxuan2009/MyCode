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
int n, m, q, ans;
int a[60];
int b[60];
int c[60];
int d[60];
int e[20];
void dfs (int x)
{
    if (x == n + 1)
    {
        int s = 0;
        for (int i = 0; i < q; i++)
        {
            if (e[b[i]] - e[a[i]] == c[i])
            {
                s += d[i];
            }
        }
        ans = max (ans, s);
    }
    else
    {
        for (e[x] = e[x - 1]; e[x] <= m; e[x]++)
        {
            dfs (x + 1);
        }
    }
}
int main()
{
    cin >> n >> m >> q;
    for (int i = 0; i < q; i++)
    {
        cin >> a[i] >> b[i] >> c[i] >> d[i];
    }
    e[0] = 1;
    dfs (1);
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

