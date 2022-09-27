#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, i1, i2, j1, j2;
    i1 = i2 = j1 = j2 = 0;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            char c;
            cin >> c;
            if (c == 'o')
            {
                if (i1 == 0)
                {
                    i1 = i;
                    j1 = j;
                }
                else
                {
                    i2 = i;
                    j2 = j;
                }
            }
        }
    }
    cout << abs (i1 - i2) + abs (j1 - j2) << endl;
    return 0;
}

