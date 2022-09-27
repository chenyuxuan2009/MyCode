#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str;
    cin>>str;
    int x=0,i;
    for( i=str.size()-1;i>0;i--)
    {
        for(int j=0;j<=str.size()-i;j++)
        {
            string str1=str.substr(j,i);
            if(str.find(str1)!=string::npos&&str.substr(str.find(str1)+1).find(str1)!=string::npos)
            {
                x=1;
            }
    	}
        if(x==1)
        {
        	break;
		}
	}
    cout<<i;
	return 0;
}


