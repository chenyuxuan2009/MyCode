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
int i;
int main()
{
    string s;
    cin >> s;
    s+='#';
    while (i<s.size()-1)
    {
        if (s[i] == '.')
        {
            cout << 0;
            i++;
        }
        if (s[i] == '-' && s[i + 1] == '.')
        {
            cout << 1;
            i++;
            i++;
        }
        if (s[i] == '-' && s[i + 1] == '-')
        {
            cout << 2;
            i++;
            i++;
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

