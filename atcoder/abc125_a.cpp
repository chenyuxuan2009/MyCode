#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,s=0;
	double t,t2;
	cin>>n>>m>>t;
	while(1){if(t2+n>=t+0.5)break;
		s+=m;
		t2+=n;
	}
	cout<<s;
	return 0;
}
