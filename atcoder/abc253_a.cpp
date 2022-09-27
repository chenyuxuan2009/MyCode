#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, d;
    cin >> a >> b >> c;
    d = b;
    if (a > b)
    {
        swap (a, b);
    }
    if (b > c)
    {
        swap (b, c);
    }
    if (a > c)
    {
        swap (a, c);
    }
    if (a > b)
    {
        swap (a, b);
    }
    if (b > c)
    {
        swap (b, c);
    }
    if (a > c)
    {
        swap (a, c);
    }
    if (b == d)
    {
        puts ("Yes");
    }
    else
    {
        puts ("No");
    }
    return 0;
}

