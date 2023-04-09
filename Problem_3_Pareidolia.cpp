#include<bits/stdc++.h>
using namespace std;
string s;
long long ans;
int k;
int main()
{
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        long long sum=0;
        for(int j=i;j<s.size();j++)
        {
            if(s[j]=="bessie"[k])
            {
                k=(k+1)%6;
                if(!k)sum++;
            }
            ans+=sum;
        }
    }
    cout<<ans<<endl;
    return 0;
}