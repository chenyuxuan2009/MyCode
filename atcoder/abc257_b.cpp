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
int a[205];
int main()
{
    int n, k, q;
    cin >> n >> k >> q;
    for (int i = 1; i <= k; i++)
    {
        int x;
        cin >> x;
        a[x] = 1;
    }
    for (int i = 1; i <= q; i++)
    {
        int l, cnt = 0;
        cin >> l;
        for (int j = 1; j <= n; j++)
        {
            if (a[j] == 1)
            {
                cnt++;
            }
            if (cnt == l)
            {
                if (j + 1 <= n && a[j + 1] != 1)
                {
                    a[j] = 0;
                    a[j + 1] = 1;
                }
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        if (a[i] == 1)
        {
            cout << i << " ";
        }
    }
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

