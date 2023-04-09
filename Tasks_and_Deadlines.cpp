#include<bits/stdc++.h>
using namespace std;
vector<pair<long long,long long>>a;
int main()
{
    long long n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        long long x,y;
        cin>>x>>y;
        a.push_back(make_pair(x,y));
    }
    sort(a.begin(),a.end());
    long long sum=0,start=0;
    for(int i=0;i<n;i++)
    {
        start+=a[i].first;
        sum+=a[i].second-start;
    }
    cout<<sum<<endl;
	return 0;
}