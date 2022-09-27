#include<bits/stdc++.h>
using namespace std;
void solve()
{
    set<int>s;
    int n, k;
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        s.insert (x);
    }
    if (s.size() > k)
    {
        puts ("-1");
        return;
    }
    cout << n * k << endl;
    for (int i = 1; i <= n; i++)
    {
        for (int it : s)
        {
            cout << it << " ";
        }
        for (int j = 1; j <= k - s.size(); j++)
        {
            cout << n << " ";
        }
    }
    cout << endl;
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

