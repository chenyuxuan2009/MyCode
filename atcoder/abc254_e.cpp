#include<bits/stdc++.h>
using namespace std;
vector<int>a[150005];
set<int>vis;
void dfs (int dep, int k, int x)
{
	if (dep > k)
    {
        return;
    }
    vis.insert (x);
    for (auto i : a[x])
    {
        dfs (dep + 1, k, i);
    }
}
int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= m; i++)
    {
        int x, y;
        cin >> x >> y;
        a[x].push_back (y);
        a[y].push_back (x);
    }
    int q;
    cin >> q;
    while (q--)
    {
        vis.clear();
        int x, k, ans = 0;
        cin >> x >> k;
        dfs (0, k, x);
        for (int i : vis)
        {
            ans += i;
        }
        cout << ans << endl;
    }
    return 0;
}

