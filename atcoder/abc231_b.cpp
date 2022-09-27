#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=1000005;
struct stu 
{
	string x;
	int shu=0;
}; 

bool cmp(stu a,stu b) {
	if(a.shu>b.shu) {
		return 1;
	} else if(a.shu<b.shu) {
		return 0;
	}
}
int main() {
	int n;
	cin>>n;
	stu a[n+1];
	for(int i=1; i<=n; i++) 
	{
		cin>>a[i].x;
		for(int j=1; j<=i; j++) 
		{
			if(a[j].x==a[i].x) 
			{
				a[i].shu++;
			}
		}
	}
	sort(a+1,a+n+1,cmp);
	cout<<a[1].x;

	return 0;
}


