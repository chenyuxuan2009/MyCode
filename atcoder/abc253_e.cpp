#include<bits/stdc++.h>
using namespace std;
const int p = 998244353;
int n, m, l, z;
int dp[1020][5020];
int sum[1020][5020];
int main()
{
    cin >> n >> m >> l;
    for (int i = 1; i <= m; i++)
    {
        dp[1][i] = 1;
        sum[1][i] = (sum[1][i - 1] + dp[1][i]) % p;
    }
    for (int i = 2; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (l > 0)
            {
                dp[i][j] = (sum[i - 1][max (j - l, 0)] + (sum[i - 1][m] - sum[i - 1][min (j + l - 1, m)])) % p;
            }
            else
            {
                dp[i][j] = sum[i - 1][m];
            }
            if (dp[i][j] < 0)
            {
                dp[i][j] += p;
            }
            sum[i][j] = (sum[i][j - 1] + dp[i][j]) % p;
        }
    }
    for (int i = 1; i <= m; i++)
    {
        z = (z + dp[n][i]) % p;
    }
    cout << z << endl;
    return 0;
}

