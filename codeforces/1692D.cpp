#include<bits/stdc++.h>
#define debug(x) cout << "debug:" << #x << "=" << x << "\nline:" << __LINE__ << "\nfunction:" << __FUNCTION__ << '\n';
#define No puts ("No")
#define NO puts ("NO")
#define Yes puts ("Yes")
#define YES puts ("YES")
#define S (x) scanf ("%d", &x)
#define C (x,c) cout << x << c
#define fi first
#define se second
#define pb push_back
#define endl '\n'
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
const ll mod = 998244353;
bool is_palindrome (string str)
{
    string st = str;
    reverse (st.begin(), st.end());
    if (st == str)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void solve()
{
    int HH, MM, m, ans = 0, x = 0;
    char c;
    cin >> HH >> c >> MM >> m;
    int M = HH * 60 + MM;
    int mmmmm = 1440 / __gcd (1440, m);
    while (x < mmmmm)
    {
        int nowH, nowM;
        string nowh, nowm;
        nowM = M;
        nowH = M / 60;
        nowM %= 60;
//        debug (nowH);
//        debug (nowM);
        if (nowH < 10)
        {
            nowh = '0' + to_string (nowH);
        }
        else
        {
            nowh = to_string (nowH);
        }
        if (nowM < 10)
        {
            nowm = "0" + to_string (nowM);
        }
        else
        {
            nowm = to_string (nowM);
        }
//        debug (nowh);
//        debug (nowm);
//        cout << nowh + ":" + nowm << endl;
        ans += is_palindrome (nowh + ":" + nowm);
        M += m;
        M %= 1440;
        x++;
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
