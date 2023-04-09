#include<bits/stdc++.h>
using namespace std;
map<int,bool>a;
int main()
{
    int n,x;
    cin>>n>>x;
    for(int i=1;i<=n;i++)
    {
        int y;
        cin>>y;
        a[y]=1;
        if(a[y-x]||a[x+y])
        {
            puts("Yes");
            return 0;
        }
    }
    puts("No");
    return 0;
}