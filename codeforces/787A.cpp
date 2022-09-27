#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c,d;
	cin>>b>>a>>d>>c;
	while(a<10000000)
	{
    	if(a>=c)
		{
    		if((a-c)%d==0) 
			{
				break;
		  	}
  	  	}
 	   	a=a+b;
 	}
	if(a>=10000000) 
	{
		cout<<"-1";
	}
	else 
	{	
		cout<<a; 
	}
	return 0;
}


