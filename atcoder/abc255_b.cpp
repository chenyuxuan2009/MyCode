#include<bits/stdc++.h>
using namespace std;
struct node
{
    long long x, y;
    bool f = 0;
} a[1005];
int main()
{
    int n, k;
    long double maxx = 0.0;
    cin >> n >> k;
    for (int i = 1; i <= k; i++)
    {
        int z;
        cin >> z;
        a[z].f = 1;
    }
    for (int i = 1; i <= n; i++)
    {
        long long xx, yy;
        cin >> xx >> yy;
        a[i].x = xx;
        a[i].y = yy;
    }
    for (int i = 1; i <= n; i++)
    {
        if (a[i].f == 1)
        {
            continue;
        }
        long double minn = 2e18 + 5;
        for (int j = 1; j <= n; j++)
        {
            if (i != j && a[j].f == 1)
            {
                long long xx = a[i].x - a[j].x;
                long long yy = a[i].y - a[j].y;
                long double z = xx * xx + yy * yy;
                if (z < minn)
                {
                    minn = z;
                }
            }
        }
        if (minn > maxx)
        {
            maxx = minn;
        }
    }
    cout << fixed << setprecision (6) << sqrt (maxx) << endl;
    return 0;
}

