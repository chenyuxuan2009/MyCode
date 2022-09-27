#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
    cin>>n;
    for(int i=1;i<=n;i++)
	{
        int a,b;
        cin>>a>>b;
        if(abs(a-b)%10==0)cout<<abs(a-b)/10<<endl;
        else cout<<abs(a-b)/10+1<<endl;
    }
	return 0;
}


