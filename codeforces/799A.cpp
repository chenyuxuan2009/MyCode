#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,t,k,d;
    cin>>n>>t>>k>>d;
    int tm=d;
    while(tm>=0)
	{
        tm=tm-t;
        n=n-k;
        if(n<=0)
		{
            cout<<"NO";
            return 0;
        }
    }
    if(n>k&&tm>=0)
	{
        cout<<"NO";
    }
    else
	{
        cout<<"YES";
    }
	return 0;
}


