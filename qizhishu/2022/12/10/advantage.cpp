#include<bits/stdc++.h>
using namespace std;
int n;
int a[200020];
int Maxx_1=INT_MIN,Maxx_1_id;
int Maxx_2=INT_MIN,Maxx_2_id; 
int main()
{	
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",a+i);
		if(a[i]>Maxx_1)
		{
			Maxx_2_id=Maxx_1_id;
			Maxx_2=Maxx_1;
			Maxx_1=a[i];
			Maxx_1_id=i;
		}
		else if(a[i]>Maxx_2)
		{
			Maxx_2=a[i];
			Maxx_2_id=i;
		}
	}
	for(int i=1;i<=n;i++)
	{
		printf("%d ",i==Maxx_1_id?a[i]-Maxx_2:a[i]-Maxx_1);
	}
	printf("\n");
	return 0;
}
/*
4
4 7 3 5
*/