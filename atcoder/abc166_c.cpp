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
int h[100020];
bool v[100020];
int main()
{
    int n, m, ans = 0;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        cin >> h[i];
    }
    for (int i = 1; i <= m; i++)
    {
        int x, y;
        cin >> x >> y;
        if (h[x] <= h[y])
        {
            v[x] = 1;
        }
        if (h[x] >= h[y])
        {
            v[y] = 1;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        ans += abs (v[i] - 1);
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

