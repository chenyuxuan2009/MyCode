#include<bits/stdc++.h>
using namespace std;
const int mod=998244353;
main()
{
	int t;
	cin>>t;
	while(t--)
	{
	 	set<int>s;
		int n;
	   	cin>>n;
		string st;
	 	cin>>st;
	   	int sum=count(st.begin(),st.end(),'1');
	   	for(int i=0;i<n-sum;i++)
	   		if(st[i]=='1')
			   	s.insert(i+1);
	   	for(int i=n-sum;i<n;i++)
	   		if(st[i]=='0')
				s.insert(i+1);
	   	if(s.size()==0)cout<<0;
	   	else 
		{
	   		cout<<"1\n"<<s.size()<<" ";
	   		for(int i:s)
	   			cout<<i<<" ";
	   	}
	   	cout<<endl; 
	}
}
