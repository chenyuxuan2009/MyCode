#include<bits/stdc++.h>
using namespace std;
const int mod=998244353;
int arr[398]={10,17,24,28,31,38,39,45,50,52,54,59,61,66,69,72,73,80,83,84,87,88,94,99,101,105,107,108,114,115,116,122,126,127,129,130,136,138,143,144,145,149,150,153,157,159,160,164,171,174,176,178,180,182,183,185,189,192,193,199,202,204,206,207,213,215,219,220,221,222,226,227,234,237,238,240,241,245,248,249,255,259,261,262,264,268,269,270,276,278,279,281,283,288,290,291,292,294,297,300,303,304,309,311,314,315,316,318,324,325,331,332,335,336,337,339,342,346,347,353,354,358,360,362,367,369,373,374,378,380,381,383,384,388,391,392,393,395,396,399,402,406,409,411,413,414,416,417,423,424,429,430,435,437,444,446,449,450,451,452,455,456,457,458,459,460,465,468,472,474,475,477,479,486,487,489,490,493,495,498,500,501,503,504,506,507,512,514,517,519,521,523,525,528,531,534,535,542,544,545,546,548,549,550,556,558,563,564,567,570,573,577,578,579,582,584,585,589,590,591,594,597,598,600,601,605,609,610,611,612,613,619,620,622,624,626,632,633,636,639,640,641,644,647,648,651,654,655,658,659,661,666,668,669,672,675,677,682,684,688,689,690,691,693,696,699,703,705,710,714,715,717,718,720,721,724,728,729,731,732,734,738,743,744,745,747,750,751,752,753,754,759,761,765,766,768,772,773,774,776,780,785,787,789,791,794,796,797,798,801,804,807,808,809,810,815,819,820,822,827,828,829,831,832,834,836,842,843,846,847,848,849,850,852,853,855,857,858,864,866,867,868,871,875,878,879,882,885,886,889,890,892,894,897,899,903,905,906,908,909,912,913,919,920,924,926,927,930,933,934,935,936,939,941,943,948,951,952,954,955,958,962,963,969,973,974,976,981,982,983,984,985,986,990,996,997,999,1000};
set<int>s;
int f(int x) 
{
  	for(int i=0;i<398;i++)
  	{
  		if(arr[i]==x)
  		{
  			return 0;	
		}
	}
	return 1;
}
int main()
{
	int n,ans=0;
	cin>>n;
	while(n--)
	{
		int x;
		cin>>x;
		ans+=(f(x));
	}
	cout<<ans<<endl;
//	for(int i=1;i<=1000;i++)
//	{
//		for(int j=1;j<=1000;j++)
//		{
//			if(4*i*j+3*i+3*j<=1000)s.insert(4*i*j+3*i+3*j);
//		}
//	}
//	cout<<s.size()<<"\n";for(auto i:s)cout<<i<<',';
	return 0;
}


