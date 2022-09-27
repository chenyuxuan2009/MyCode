#include<bits/stdc++.h> 
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int cnt1=0,cnt2=0;
        while(n--)
        {
            int temp;
            cin>>temp;
            if(temp==1)
                cnt1++;
            else
                cnt2++;
        }
        if(cnt2%2==0)
        	puts((cnt1%2==0?"Yes":"NO"));
        else
        	puts((cnt1>=2&&cnt1%2==0?"Yes":"NO"));
    } 
}
