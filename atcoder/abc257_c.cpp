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
struct node
{
    bool f;
    int w;
} a[200005];
bool cmp (node x, node y)
{
    if (x.w == y.w)
    {
        return x.f > y.f;
    }
    return x.w < y.w;
}
int main()
{
    int n, ch = 0, ans;
    cin >> n;
    char c;
    for (int i = 1; i <= n; i++)
    {
        cin >> c;
        if (c == '0')
        {
            a[i].f = 0;
        }
        else
        {
            a[i].f = 1;
            ch++;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i].w;
    }
    sort (a + 1, a + n + 1, cmp);
    ans = ch;
    for (int i = 1; i <= n; i++)
    {
        if (a[i].f == 0)
        {
            ch++;
        }
        else
        {
            ch--;
        }
        ans = max (ans, ch);
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

