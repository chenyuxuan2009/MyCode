#include<bits/stdc++.h>
using namespace std;
int n,s[200005],a[200005];
long long c=0;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++)cin>>a[i],c+=s[a[i]],s[a[i]]++;
	for(int i=1;i<=n;i++)cout<<c-s[a[i]]+1<<endl;
}

