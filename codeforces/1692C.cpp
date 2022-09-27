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
bool check (int x, int y, char mp[10][10])
{
    for (int i = x, j = y; i >= 1 && j >= 1; i--, j--)
    {
        if (mp[i][j] == '.')
        {
            return 0;
        }
    }
    for (int i = x, j = y; i >= 1 && j <= 8; i--, j++)
    {
        if (mp[i][j] == '.')
        {
            return 0;
        }
    }
    for (int i = x, j = y; i <= 8 && j <= 8; i++, j++)
    {
        if (mp[i][j] == '.')
        {
            return 0;
        }
    }
    for (int i = x, j = y; i <= 8 && j >= 1; i++, j--)
    {
        if (mp[i][j] == '.')
        {
            return 0;
        }
    }
    return 1;
}
void solve()
{
    char mp[10][10];
    for (int i = 1; i <= 8; i++)
    {
        for (int j = 1; j <= 8; j++)
        {
            cin >> mp[i][j];
        }
    }
    for (int i = 2; i <= 7; i++)
    {
        for (int j = 2; j <= 7; j++)
        {
            if (check (i, j, mp))
            {
                cout << i << " " << j << endl;
                return;
            }
        }
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

