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
void swap (string &a, string &b)
{
    string t;
    t = a;
    a = b;
    b = t;
}
bool compare (string a, string b)
{
    if (a.size() < b.size())
    {
        return true;
    }
    if (a.size() > b.size())
    {
        return false;
    }
    for (int i = 0; i < a.size(); ++i)
    {
        if (a[i] > b[i])
        {
            return false;
        }
        if (b[i] > a[i])
        {
            return true;
        }
    }
    return false;
}
string x (string s1, string s2)
{
    int len1, len2;
    int a[100005], b[100005];
    memset (a, 0, sizeof (a));
    memset (b, 0, sizeof (b));
    string ret = "";
    if (compare (s1, s2))
    {
        swap (s1, s2);
        putchar ('-');
    }
    len1 = s1.size();
    len2 = s2.size();
    for (int i = 0; i < len1; ++i)
    {
        a[len1 - i] = s1[i] - '0';
    }
    for (int i = 0; i < len2; ++i)
    {
        b[len2 - i] = s2[i] - '0';
    }
    for (int i = 1; i <= len1; ++i)
    {
        a[i] -= b[i];
        if (a[i] < 0)
        {
            a[i + 1]--;
            a[i] += 10;
        }
    }
    while (a[len1] == 0 && len1 > 1)
    {
        len1--;
    }
    for (int i = len1; i >= 1; --i)
    {
        ret += to_string (a[i]);
    }
    return ret;
}
void solve()
{
    int n;
    cin >> n;
    string s, ans = "";
    cin >> s;
    if (s[0] != '9')
    {
        string y = "";
        for (int i = 1; i <= n; i++)
        {
            y += "9";
        }
        ans = x (y, s);
    }
    else
    {
        string y = "";
        for (int i = 1; i <= n + 1; i++)
        {
            y += "1";
        }
        ans = x (y, s);
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

