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
    int n, l = 0, r = 0, ans = 0;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '(')
        {
            l++;
        }
        else
        {
            r++;
        }
        if (r > l)
        {
            r--;
            ans++;
        }
    }
    cout << ans << endl;
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
��¼���ж�����������
��������Ŷ࣬Ų����� 

��飺
+1����-1
���������Ƿ����
int���longlong�棬��û��*1LL
�Ƿ�����Խ�籬ջ����0
��ĿҪ��ģ����д�������
.size()�����޷��ţ����з��������Ƿ����
*/

