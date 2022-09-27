#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int a[30] = {};
    string s[2 * n + 10];
    for (int i = 1; i <= 2 * n + 1; i++)
    {
        cin >> s[i];
        for (int j = 0; j < s[i].size(); j++)
        {
            a[s[i][j] - 'a' + 1]++;
        }
    }
    for (int i = 1; i <= 26; i++)
    {
        if (a[i] % 2 == 1)
        {
            cout << char (i + 'a' - 1) << endl;
            return;
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

