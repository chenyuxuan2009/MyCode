#include<bits/stdc++.h>
using namespace std;
/*Big Int*/
const int MAX_LEN_FOR_BIGINT=10020;
struct BigInt
{
	int len;
	int a[MAX_LEN_FOR_BIGINT];
	void clear()//O(n) 
	{
		for(int i=0;i<MAX_LEN_FOR_BIGINT;i++)a[i]=0;
	}
	void read()//O(n) 
	{
		static char s[MAX_LEN_FOR_BIGINT];
		scanf("%s",s);
		len=strlen(s);
		for(int i=0;i<len;i++)a[len-i-1]=s[i]-'0';
	}
	void init(string s)//O(n) 
	{
		len=s.size();
		for(int i=0;i<len;i++)a[len-i-1]=s[i]-'0';
	}
	void print()//O(n) 
	{
		for(int i=(len-1>0?len-1:0);i>=0;i--)
		{
			printf("%d",a[i]);
		}
	} 
	void fa()
	{
		for(int i=0;i<len;i++)
		{
			if(a[i]>=10)
			{
				a[i+1]+=a[i]/10;
				a[i]%=10;
			}
		}
		while(a[len-1]>=10){a[len]=a[len-1]/10;a[len-1]%=10;len++;}
	}
	void fb()
	{
		
	}
}; 
BigInt operator+(BigInt a,BigInt b)//O(n)
{
	BigInt c;
	int len=max(a.len,b.len);
	c.len=len;
	c.clear();
	for(int i=0;i<len;i++)c.a[i]+=a.a[i]+b.a[i];
	c.fa();
	return c;
}
BigInt operator+=(BigInt &a,BigInt &b)//O(n)
{
	a=a+b;
}
/*Fast Read*/
const int MAXSIZE=(1<<20);
struct IO{char buf[MAXSIZE],*p1,*p2;char pbuf[MAXSIZE],*pp;IO():p1(buf),p2(buf),pp(pbuf){}~IO(){fwrite(pbuf,1,pp-pbuf,stdout);}inline char gc(){if(p1==p2)p2=(p1=buf)+fread(buf,1,MAXSIZE,stdin);return p1==p2?' ':*p1++;}inline bool blank(char ch){return ch==' '||ch=='\n'||ch=='\r'||ch=='\t';}template<class T>inline void read(T&x){double tmp=1;bool sign=0;x=0;char ch=gc();for(;!isdigit(ch);ch=gc())if(ch=='-')sign=1;for(;isdigit(ch);ch=gc())x=x*10+(ch-'0');if(ch=='.')for(ch=gc();isdigit(ch);ch=gc())tmp/=10.0,x+=tmp*(ch-'0');if(sign)x=-x;}inline void read(char*s){char ch=gc();for(;blank(ch);ch=gc());for(;!blank(ch);ch=gc())*s++=ch;*s=0;}inline void read(char&c){for(c=gc();blank(c);c=gc());}inline void push(const char&c){if(pp-pbuf==MAXSIZE)fwrite(pbuf,1,MAXSIZE,stdout),pp=pbuf;*pp++=c;}template<class T>inline void write(T x){if(x<0)x=-x,push('-');static T sta[35];T top=0;do{sta[top++]=x%10,x/=10;}while(x);while(top)push(sta[--top]+'0');}template<class T>inline void write(T x,char lastChar){write(x),push(lastChar);}}io;
int main()
{
	__int128 a;
	// a=read<__int128>();
	// write<__int128>(a);
	return 0;
}
/*
/BigInt/
struct IO{
const int MAXSIZE=(1<<20)
#define isdigit(x)(x>='0'&&x<='9')
char buf[MAXSIZE],*p1,*p2;char pbuf[MAXSIZE],*pp;IO():p1(buf),p2(buf),pp(pbuf){}~IO(){fwrite(pbuf,1,pp-pbuf,stdout);}inline char gc(){if(p1==p2)p2=(p1=buf)+fread(buf,1,MAXSIZE,stdin);return p1==p2?' ':*p1++;}inline bool blank(char ch){return ch==' '||ch=='\n'||ch=='\r'||ch=='\t';}template<class T>inline void read(T&x){double tmp=1;bool sign=0;x=0;char ch=gc();for(;!isdigit(ch);ch=gc())if(ch=='-')sign=1;for(;isdigit(ch);ch=gc())x=x*10+(ch-'0');if(ch=='.')for(ch=gc();isdigit(ch);ch=gc())tmp/=10.0,x+=tmp*(ch-'0');if(sign)x=-x;}inline void read(char*s){char ch=gc();for(;blank(ch);ch=gc());for(;!blank(ch);ch=gc())*s++=ch;*s=0;}inline void read(char&c){for(c=gc();blank(c);c=gc());}inline void push(const char&c){if(pp-pbuf==MAXSIZE)fwrite(pbuf,1,MAXSIZE,stdout),pp=pbuf;*pp++=c;}template<class T>inline void write(T x){if(x<0)x=-x,push('-');static T sta[35];T top=0;do{sta[top++]=x%10,x/=10;}while(x);while(top)push(sta[--top]+'0');}template<class T>inline void write(T x,char lastChar){write(x),push(lastChar);}}io;
const int MAX_LEN_FOR_BIGINT=10020;struct BigInt{int len;int a[MAX_LEN_FOR_BIGINT];void clear(){for(int i=0;i<MAX_LEN_FOR_BIGINT;i++)a[i]=0;}void read(){static char s[MAX_LEN_FOR_BIGINT];scanf("%s",s);len=strlen(s);for(int i=0;i<len;i++)a[len-i-1]=s[i]-'0';}void init(string s){len=s.size();for(int i=0;i<len;i++)a[len-i-1]=s[i]-'0';}void print(){for(int i=(len-1>0?len-1:0);i>=0;i--){printf("%d",a[i]);}}void fa(){for(int i=0;i<len;i++){if(a[i]>=10){a[i+1]+=a[i]/10;a[i]%=10;}}while(a[len-1]>=10){a[len]=a[len-1]/10;a[len-1]%=10;len++;}}void fb(){}};BigInt operator+(BigInt a,BigInt b){BigInt c;int len=max(a.len,b.len);c.len=len;c.clear();for(int i=0;i<len;i++)c.a[i]+=a.a[i]+b.a[i];c.fa();return c;}BigInt operator+=(BigInt&a,BigInt&b){a=a+b;}
int main()
{
	return 0;
}
*/