#import"cstdio"
#define X(a,b) a>b?a:b
#define Y(a,b) for(int a=1;a<=b;a++)
#define S(x) scanf("%d",&x)
int n,m,t,a[1005][1005];main(){S(t);Y(k,t){m=-1;S(n);Y(i,n)Y(j,i){S(a[i][j]);a[i][j]+=X(a[i-1][j],a[i-1][j-1]),m=X(m,a[i][j]);}printf("%d\n",m);}}
