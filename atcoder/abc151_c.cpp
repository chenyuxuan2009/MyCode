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
bool v[100020];
int c[100020];
int main()
{
    int n, m, ac = 0, wa = 0;
    cin >> n >> m;
    for (int i = 1; i <= m; i++)
    {
        int x;
        string s;
        cin >> x >> s;
        if (!v[x])
        {
            if (s == "WA")
            {
                c[x]++;
            }
            else
            {
                v[x] = 1;
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        if (v[i])
        {
            ac++;
            wa += c[i];
        }
    }
    cout << ac << " " << wa << endl;
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

