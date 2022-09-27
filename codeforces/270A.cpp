#include<bits/stdc++.h>
#define int long long
using namespace std;
int t,n;
int arr[22]={179,178,177,176,175,174,172,171,170,168,165,162,160,156,150,144,140,135,120,108,
90,60};
int search(int start, int end, int key) 
{
  int ret=-1;  
  int mid;
  while(start<=end) 
  {
    mid=(start&end)+((start^end)>>1);
    if(arr[mid]>key)
      start=mid+1;
    else if(arr[mid]<key)
      end=mid-1;
    else 
	{  
      ret=mid;
      break;
    }
  }
  return ret; 
}
main()
{
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		cout<<(search(0,22,n)!=-1?"YES\n":"NO\n");
	}
}
