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
int c[20];
int main()
{
    int n, mnc = INT_MAX, maxn;
    cin >> n;
    for (int i = 1; i <= 9; i++)
    {
        cin >> c[i];
        if (c[i] <= mnc)
        {
            mnc = c[i];
            maxn = i;
        }
    }
//    cout << maxn << endl;
    int cnt = n / mnc;
    int x = 0, cnt2 = 0;
    int s = n - cnt * mnc;
//    cout << s << endl;
    for (int i = 9; i >= 1; i--)
    {
        if (i > maxn)
        {
//            cout << c[i] - mnc << endl;
            if (c[i] - mnc <= s)
            {
//                x = i;
                cnt2 = s / (c[i] - mnc);
                cnt -= cnt2;
                s%=c[i] - mnc;
                for (int j = 1; j <= cnt2; j++)
                {
                    cout << i;
                }
            }
        }

    }

    for (int i = 1; i <= cnt; i++)
    {
        cout << maxn;
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
9255
1000 1001 1002 1004 1008 1016 1032 1064 1128

*/

