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
ll x, z, b, a;
int main()
{
    cin >> a >> b >> x;
    for (ll i = 1, j = 1; i <= 1000000000; i *= 10, j++)
    {
        if (a * i + b * j <= x)
        {
            z = min ( (x - b * j) / a, 10 * i - 1);
        }
    }
    if (a * 1000000000 + b * 10 <= x)
    {
        z = 1000000000;
    }
    cout << z << endl;
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

