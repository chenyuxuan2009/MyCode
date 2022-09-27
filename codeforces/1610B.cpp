#include<bits/stdc++.h>
using namespace std;
const int mod=998244353;
bool isok(vector<int>arr)
{
    int x=0;
    int y=arr.size()-1;
    while(x<y)
    {
        if(arr[x]!=arr[y])
		{
			return 0;
		}
        x++;
        y--;
    }
    return 1;
}
main()
{
	int t=1;
    cin>>t;
    while(t--)
    {
	    int n;
	    cin>>n;
	    vector<int>v;
		vector<int>v1;
		vector<int>v2;
	    for(int i=0;i<n;i++)
	    {
	    	int x;
	    	cin>>x;
	    	v.push_back(x);
	    }
	    int x=0,y=n-1; 
	    while(v[x]==v[y]&&x<y)
	    {
	        x++;
	        y--;
	    }
	    if(x>=y)
	    {
	        puts("YES");
	        continue;
	    }
	    for(int i=0;i<n;i++)
	    {
	        if(v[i]!=v[x])
	        {
	        	v1.push_back(v[i]);
	        }
	        if(v[i]!=v[y])
	        {
	            v2.push_back(v[i]);
	        }
	    }
	    if(isok(v1)||isok(v2))
	    {
	        puts("YES");
	    }
	    else
	    {
	        puts("NO");
	    } 
    }
}


