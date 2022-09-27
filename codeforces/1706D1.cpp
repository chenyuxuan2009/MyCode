#include <bits/stdc++.h>
// #define int long long
#define double long double
#define mid ((l+r)>>1)
using namespace std;
const int mod=1e9+7;
signed main(){
	//freopen("","r",stdin);
	//freopen("","w",stdout);
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int a[n+1];
		for(int i=1;i<=n;i++) cin>>a[i];
		stack<int> vc[100005];
		for(int i=1;i<=n;i++){
			int sq=sqrt(a[i]);
			int csq=0;
			for(int j=a[i]/k;j<=sq;j++){
				vc[j].push(i);
//				cout<<j<<" ";
				if(j==sq) csq=1;
			}
			for(int j=min(sq,k);j>=1;j--){
				if(a[i]/j==sq&&csq) continue;
				vc[a[i]/j].push(i);
//				cout<<a[i]/j<<" ";
			} 
		}
		int l=1,r=0,cnt=0,num[n+1],minv=100000;
		for(int i=1;i<=n;i++) num[i]=0;
		while(r<=100000){
			while(cnt!=n&&r<=100000){
				r++;
				vector<int> vec;
				while(!vc[r].empty())
				{
					int u=vc[r].top();
					vc[r].pop();
					num[u]++;
					if(num[u]==1) cnt++;
					vec.push_back(u);
				}
				for(int i=(int)vec.size()-1;i>=1;i--)
				{
					vc[r].push(vec[i]);
				}
				// for(auto v:vc[r]){
				// 	num[v]++;
				// 	if(num[v]==1) cnt++;
				// }
			}
			while(cnt==n&&l<=r){
				minv=min(minv,r-l);
				vector<int> vec;
				while(!vc[l].empty())
				{
					int u=vc[l].top();
					vc[l].pop();
					num[u]++;
					if(num[u]==0) cnt--;
					vec.push_back(u);
				}
				// for(auto v:vc[l]){
				// 	num[v]--;
				// 	if(num[v]==0) cnt--;
				// }
				for(int i=(int)vec.size()-1;i>=1;i--)
				{
					vc[l].push(vec[i]);
				}
				l++;
			}
		}
		cout<<minv<<endl;
	}
	return 0;
}