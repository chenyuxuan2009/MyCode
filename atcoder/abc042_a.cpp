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
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a == 7 && b == 5 && c == 5 || a == 5 && b == 7 && c == 5 || a == 5 && b == 5 && c == 7)
    {
        YES;
    }
    else
    {
        NO;
    }
    return 0;
}

