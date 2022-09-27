#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int x, z, cnt1 = 0;
    cin >> x;
    z = x;
    if (x == 1 || x == 2)
    {
        cout << 3 << endl;
        return;
    }
    vector<int>a;
    while (z)
    {
        a.push_back (z % 2);
        z /= 2;
    }
    for (int i : a)
    {
//        cout << i;
        if (i == 1)
        {
            cnt1++;
        }
    }
    if (cnt1 == 1)
    {
        cout << x + 1 << endl;
        return;
    }
    int y = 1;
    for (int i : a)
    {
        if (i == 1)
        {
            cout << y << endl;
            return;
        }
        y *= 2;
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

