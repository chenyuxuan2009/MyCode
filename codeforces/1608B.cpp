#include<bits/stdc++.h>
using namespace std;
const int mod=998244353;
main()
{
	int t;
	cin>>t;
	for(int tt=1;tt<=t;tt++)
	{
		int n,a,b;
		cin>>n>>a>>b;
		int arr[n+1];
		if(abs(a-b)>=2||a+b>=n-1)
		{
			puts("-1");
			continue;
		}
		arr[n/2+1]=n;
		int l=n/2,r=n/2+2,ll=1,rr=n-1,aa=0,bb=0,x,y;
		for(int i=1;i<=n/2;i++)
		{
			
			if(aa==a||bb==b)
			{
				for(int j=1;j<=l;ll++,j++)
				{
					arr[j]=ll;
				}
				for(int i=ll,j=r;j<=n;i++,j++)
				{
					arr[j]=i;
				}
				break;
				
			}
			else
			{
				if(i%2==1)
				{
					arr[l--]=ll++;
					arr[r++]=ll++; 
					aa++;
				}
				else
				{
					arr[l--]=rr--;
					arr[r++]=rr--;
					bb++;
				}
			} 
		}	
//		for(int i=1,j=1;j<=a;j++,i++)
//		{
//			swap(arr[i],arr[i+1]);
//		}
//		for(int i=n,j=1;j<=b;j++,i--)
//		{
//			swap(arr[i],arr[i-1]);
//		}
		for(int i=1;i<=n;i++)
		{
			cout<<arr[i]<<" ";
		}
		cout<<endl;
	}
}
/*
4 6 1 7 2 5 3

3 5 1 6 2 4 

3 1 4 2


3*/

