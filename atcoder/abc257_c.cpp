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
��飺
+1����-1
���������Ƿ����
int���longlong�棬��û��*1LL
�Ƿ�����Խ�籬ջ����0
��ĿҪ��ģ����д�������
.size()�����޷��ţ����з��������Ƿ����
*/

