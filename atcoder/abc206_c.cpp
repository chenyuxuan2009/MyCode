#include<bits/stdc++.h>
#define ll long long
using namespace std;int cmp(const void*p,const void*q){return*(ll*)p-*(ll*)q;}int main(){ll sum=0,tmp=0,cnt=1,n,i,a[300005];; cin>>n;sum=(n*(n-1))/2;for(i=0;i<n;i++)cin>>a[i];qsort(a,n,sizeof(ll),cmp);for(i=0;i<n;i++)if(a[i]==a[i+1])cnt++;else tmp=(cnt*(cnt-1))/2,sum=sum-tmp,cnt=1;cout<<sum;}
