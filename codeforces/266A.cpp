#include<bits/stdc++.h>
using namespace std;
int main()
{
	stack<char>s;
    int n,sum=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        char ch;
        cin>>ch;
        if(i==0) 
		{
			s.push(ch);
		}
        else
        {
            if(ch==s.top()) sum++;
            else s.push(ch);
        }
    }
    cout<<sum;
	return 0;
}


