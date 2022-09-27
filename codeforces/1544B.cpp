#include<bits/stdc++.h>
#include<iostream>
#include<string>
#include<algorithm>
#include<cstdio>
#include<cstring>
#include<cstdlib>
using namespace std;
#define ll long long
#define for1(i,n,a,b) for(ll (i)=(n);(i)<=(a);(i)+=(b))
#define for2(i,n,a,b) for(ll (i)=(n);(i)>=(a);(i)-=(b))
void solve()
{
	int h,w;
    cin>>h >> w;
    vector<vector<int>> a(h, vector<int>(w));
    for (int i = 0; i < h; ++i) 
	{
        for (int j = 0; j < w; ++j)
		{
            if (i == 0 || i == h - 1) 
			{
                if (i == 0) 
				{
                    if (j % 2) a[i][j] = 0;
					else a[i][j] = 1;
                } 
				else 
				{
                    if (a[i - 1][j] || (j > 0 && (a[i - 1][j - 1] || a[i][j - 1])) || (j < w - 1 && a[i - 1][j + 1]))a[i][j] = 0;     
                    else a[i][j] = 1;   
                }
            } 
			else 
			{
                if (j == 0 || j == w - 1) 
				{
                    if (j == 0)
				    {
                        if (a[i - 1][j] || a[i - 1][j + 1]) a[i][j] = 0;
						else a[i][j] = 1;
                    } 
					else 
					{
                        if(a[i - 1][j] || a[i - 1][j - 1]) a[i][j] = 0;                            
                        else a[i][j] = 1;
                    }
                } 
				else a[i][j] = 0;                   
            }
        }
    }
    for (int i = 0; i < h; ++i) {
        for (int j = 0; j < w; ++j) {
            cout << a[i][j];
        }
        cout<<'\n';
    }
    cout<<'\n';
}

int main()
{
	int t;
	cin>>t;
	while(t--)solve(); 
	return 0;
}

