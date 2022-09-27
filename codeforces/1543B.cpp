#include <bits/stdc++.h> 
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--)
	{
		long long n,a,s=0;
		cin>>n;
		for(int i=0;i<n;s+=a,i++)
			cin>>a;
		cout<<(s%n)*(n-(s%n))<<endl;
	}
}
