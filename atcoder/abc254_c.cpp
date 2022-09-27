#include<bits/stdc++.h>
using namespace std;
int a[200005];
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int>v[k + 5];
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        v[i % k == 0 ? k : i % k].push_back (x);
//        cout << "done." << endl;
    }
//    for (int i = 1; i <= k; i++)
//    {
//        for (int j = 0; j < v[i].size(); j++)
//        {
//            cout << v[i][j] << " ";
//        }
//        cout << endl;
//    }
    for (int i = 1; i <= k; i++)
    {
        sort (v[i].begin(), v[i].end());
        int cnt = 1;
        for (int j = 0; j < v[i].size(); j++)
        {
            a[cnt + i - 1] = v[i][j];
//            cout << v[i][j] << " ";
            cnt += k;
        }
//        cout << endl;
    }
//    for (int i = 1; i <= n; i++)
//    {
//        cout << a[i] << endl;
//    }
    puts (is_sorted (a + 1, a + n + 1) ? "Yes" : "No");
    return 0;
}

