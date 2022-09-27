#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n, m, k, a = 0, b = 0, la = 0, lb = 0;
    cin >> n >> m >> k;
    string s1, s2, c = "";
    cin >> s1 >> s2;
    sort (s1.begin(), s1.end());
    sort (s2.begin(), s2.end());
//    cout << s1 << " " << s2 << endl;
    while (a < s1.size() && b < s2.size())
    {
        bool flag = 0;
        if (s1[a] < s2[b])
        {
            if (la < k)
            {
                flag = 1;
            }
        }
        else
        {
            if (lb >= k)
            {
                flag = 1;
            }
        }
        if (flag)
        {
            lb = 0;
            c += s1[a];
            la++;
            a++;
        }
        else
        {
            la = 0;
            c += s2[b];
            lb++;
            b++;
        }
    }
    cout << c << endl;
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

