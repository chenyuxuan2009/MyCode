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
˼·��
���x<y����ôһ������һ���������ϣ�������ĳ��������1
���x>y��һ���Ǽ���һ��ż����
���x=y��һ����0

��飺
+1����-1
���������Ƿ����
int���longlong�棬��û��*1LL
�Ƿ�����Խ�籬ջ����0
��ĿҪ��ģ����д�������
.size()�����޷��ţ����з��������Ƿ����
*/
