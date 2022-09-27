#include <bits/stdc++.h>
#define mp(a,b) std::make_pair(a,b)
const int N = 50 + 5;
std::set<std::pair<int,int> > m[N];
int gcd(int a, int b) {return b?gcd(b,a%b):a;}
int main()
{
    int n;
    scanf("%d", &n);
    int a, b;
    scanf("%d%d", &a, &b);
    m[1].insert(mp(a,b));
    for(int i = 2; i <= n; i ++) {
        scanf("%d%d", &a, &b);
        for(auto x: m[i-1]) {
            m[i].insert(mp(gcd(x.first, a), gcd(x.second, b)));
            m[i].insert(mp(gcd(x.first, b), gcd(x.second, a)));
        }
    }
    long long ans = 0;
    for(auto x: m[n]) {
        ans = std::max(ans, 1ll * x.first/gcd(x.first,x.second) * x.second);
    }
    printf("%lld\n", ans);
    return 0;
}
