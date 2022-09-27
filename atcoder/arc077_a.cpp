#include<bits/stdc++.h>
using namespace std;
int n;
int a[200020];
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (int i = n; i >= 1; i -= 2)
    {
        cout << a[i] << " ";
    }
    for (int i = n % 2 + 1; i <= n; i += 2)
    {
        cout << a[i] << " ";
    }
    return 0;
}
