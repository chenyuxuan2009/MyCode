#include<bits/stdc++.h>
using namespace std;
int i,n,j,al;string a;
int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a;
        al=a.size();
        cout<<a[0];
        for(j=1;j<al;j++)
        {
            if(a[j]==a[j+1])
            {
                cout<<a[j];
                j++;
            }
            else if(a[j]!=a[j+1])
            {
            	cout<<a[j];
			}   
        }
        cout<<endl;
    }
    return 0;
}
