#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n / 10 % 10 == 0)
    {
        cout << 0 << n % 10 << endl;
    }
    else
    {
        cout << n % 100 << endl;
    }
    return 0;
}

