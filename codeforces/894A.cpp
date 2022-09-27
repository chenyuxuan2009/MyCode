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
int main()
{
    string s;
    cin >> s;
    int ans = 0;
    for (int i = 0; i < (int)s.size() - 2; i++)
    {
        for (int j = i + 1; j < (int)s.size() - 1; j++)
        {
            for (int k = j + 1; k < (int)s.size(); k++)
            {
                if (s[i] == 'Q' && s[j] == 'A' && s[k] == 'Q')
                {
                    ans++;
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}

