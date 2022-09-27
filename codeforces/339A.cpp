#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
    cin>>s;
    int x=(s.size()+1)/2;
    int y[x],z=0,f=0,min=0;
    while(z<s.size())
	{
		y[f++]=s[z];
	   	z+=2;
	}
    for(int i=0;i<x;i++)
    {
	    min=i;
	    for(int k=i+1;k<x;k++)
	   	{
	   		if(y[k]<y[min])
	   		{
	   		   min=k;	
			}		
	   	} 
	   swap(y[min],y[i]);
    }
    z=0;
	f=0;
    while(z<s.size())
	{
	   s[z]=y[f++];
	   z+=2;
 	}
    cout<<s;
	return 0;
}


