#include<iostream>
using namespace std;
int n,x;
bool op;
int main()
{
    cin>>n;
    if(n==1)
    {
        cin>>x;
        if(x==1)puts("YES");
        else puts("NO");
        return 0;
    }
    while(n--)
    {
        cin>>x;
        if(!x)
        {
            if(op)
            {
                puts("NO");
                return 0;
            }
            op=1;
        }
    }
    if(!op)puts("NO");
    else puts("YES");
    return 0;
}
