#include <bits/stdc++.h>
#define var long long
using namespace std;
int main()
{
	int n;cin>>n;
	int k;cin>>k;
	string s;cin>>s;
	int a[n-1];
	for(int i=0;i<n-1;i++)
		a[i]=s[i]==s[i+1];
	int cnt=0;
	for(int i=0;i<n-1;i++)
		cnt+=a[i];
	cout<<min(cnt+2*k,n-1);
    return 0;
}

