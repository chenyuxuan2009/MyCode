#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a,b,mx=0,s=0;
	cin>>n;
	for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        s=s+(b-a);
        if(s>mx)
        {
        	mx=s;
		}
    }
    cout<<mx;
	return 0;
}


