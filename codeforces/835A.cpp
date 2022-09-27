#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long s,v1,v2,t1,t2,q1,q2;
    cin>>s>>v1>>v2>>t1>>t2;
    q1=2*t1+s*v1;
    q2=2*t2+s*v2;
    if (q1<q2) 
	{
        cout<<"First"<<endl;
    } 
	else if (q1 > q2) 
	{
        cout<<"Second"<<endl;
    } 
	else 
	{
        cout<<"Friendship"<<endl;
    }
    
	return 0;
}


