#include <iostream>
using namespace std;
char c[10001][10001];
long long sum=0;
int main()
{
	int i,j,k,n,l;
	cin>>n;
	for(i=1;i<=n;i++)
	for(j=1;j<=n;j++)cin>>c[i][j];
	for(i=1;i<=n;i++)
	{
		k=0;
		l=0;
	    for(j=1;j<=n;j++)
		{
	    	if(c[i][j]=='C')k++;
	    	if(c[j][i]=='C')l++;
		}
		sum+=(k*(k-1))/2+(l*(l-1))/2;
	}
	cout<<sum<<endl;
	return 0;
}
