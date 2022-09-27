#include<bits/stdc++.h>
using namespace std;
int main()
{ 
	int a,b,n;
    cin>>a>>b;
    n=(a+b)/2;
    if(a<b)
	{
        n=n-a;
    }
    else
	{
        n=n-b;
    }
    if(n==0)
	{
        cout<<"1";  
    }
    else if ((a+b)%2==0)
    {
        cout<<n*(n+1);
    }
    else{
        cout<<(n+1)*(n+1);
    }
	return 0;
}


