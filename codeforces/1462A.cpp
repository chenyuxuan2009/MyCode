#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;
int t,n;
int b[307];
int main()
{
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(int i=1;i<=n;i++)scanf("%d", &b[i]);
        if(n==1)
        {
            printf("%d\n", b[1]);
            continue;
        }
        printf("%d %d ",b[1],b[n]);
        for(int i=3;i<=n;i++)
        {
            if(i%2==1)printf("%d ",b[(i+1)/2]);           
            else printf("%d ",b[n-(i/2)+1]);            
        }
        printf("\n");
    }
    return 0;
}
