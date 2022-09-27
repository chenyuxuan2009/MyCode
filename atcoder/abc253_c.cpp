#include<bits/stdc++.h>
using namespace std;
map<int, int>m;
int main()
{
    int q;
    cin >> q;
    while (q--)
    {
        int o;
        cin >> o;
        if (o == 1)
        {
            int x;
            cin >> x;
            m[x]++;
        }
        if (o == 2)
        {
            int x, c;
            cin >> x >> c;
            m[x] = max (m[x] - c, 0);
            if (m[x] == 0)
            {
                auto it = m.find (x);
                m.erase (it);
            }
        }
        if (o == 3)
        {
            cout << (--m.end())->first - m.begin()->first << endl;
        }
    }
    return 0;
}

