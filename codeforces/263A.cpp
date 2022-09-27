#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x;
    for(register int i=1;i<=5;i++)
	{
        for(register int j=1;j<=5;j++)
		{
            cin>>x;
            if(x==1)
			{
                cout<<abs(3-i)+abs(3-j)<<endl;
                return 0;
            }
        }
    }
	return 0;
}


