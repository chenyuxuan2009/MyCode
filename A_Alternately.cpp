#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s;
    cin>>n>>s;
    puts(s.find("MM")!=string::npos||s.find("FF")!=string::npos?"No":"Yes");
    return 0;
}