#include<bits/stdc++.h>
#define ll long long

using namespace std;
const int N=1e5+10;
int a[N],n,t;

int main(){
    scanf("%d%d",&n,&t);
    for(int i=1;i<=n;i++) scanf("%d",&a[i]);
    int l=1,r=1,s=0,ans=0;
    while(233){
        while(r<=n&&s<=t) s+=a[r++];
        if(s<=t){
            ans=max(ans,r-l);
            break;
        }
        else ans=max(ans,r-l-1);
        s-=a[l++];
    }
    printf("%d\n",ans);
    return 0;
}
