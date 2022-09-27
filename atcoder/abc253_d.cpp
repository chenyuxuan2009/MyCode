#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n, a, b;
    cin >> n >> a >> b;
    ll lcm = a / __gcd (a, b) * b;
    ll sum = (lcm + (lcm + ( (n / lcm) - 1) * lcm)) * (n / lcm) / 2;
    ll asum = (a + (a + ( (n / a) - 1) * a)) * (n / a) / 2;
    ll bsum = (b + (b + ( (n / b) - 1) * b)) * (n / b) / 2;
    cout << (1 + n) *n / 2 - asum - bsum + sum << endl;
    return 0;
}

