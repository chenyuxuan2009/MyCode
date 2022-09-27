#include<bits/stdc++.h>
using namespace std;
int a[105];
int main()
{
	int n;
	double s=0;
	cin>>n;
    for(int i=1;i<=n;i++) 
	{
    	cin>>a[i]; 
    	s+=a[i];  
    } 
    cout<<fixed<<setprecision(10)<<s/n;  
	return 0;
}


