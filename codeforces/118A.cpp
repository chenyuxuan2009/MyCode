#include<bits/stdc++.h>
using namespace std;
int main()
{
	string a;
	cin>>a;
    int la=a.size();
    for(int i=0;i<la;i++)
	{
        if(a[i]>='A'&&a[i]<='Z')
        {
       		a[i]+=32;
		}
        if(a[i]!='a'&&a[i]!='o'&&a[i]!='y'&&a[i]!='e'&&a[i]!='u'&&a[i]!='i')
        {
        	cout<<"."<<a[i];
		}
    }
	return 0;
}


