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
��飺
+1����-1
���������Ƿ����
int���longlong�棬��û��*1LL
�Ƿ�����Խ�籬ջ����0
��ĿҪ��ģ����д�������
.size()�����޷��ţ����з��������Ƿ����
*/

