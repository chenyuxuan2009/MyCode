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
    int x, y;
    cin >> x >> y;
    if (y > x)
    {
        cout << (y - x + 1) % 2 + 1 << endl;
    }
    else if (x == y)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << (x - y) % 2 + 1 << endl;
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
/*
思路：
如果x<y，那么一定是用一个奇数补上，或者是某个奇数和1
如果x>y，一定是减掉一个偶数。
如果x=y，一定是0

检查：
+1还是-1
多组数据是否清空
int相乘longlong存，有没有*1LL
是否会出现越界爆栈除以0
题目要求模数和写的相等吗
.size()返回无符号，与有符号运算是否出错
*/
