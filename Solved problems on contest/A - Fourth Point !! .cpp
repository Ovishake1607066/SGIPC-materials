#include<bits/stdc++.h>
using namespace std;
#define read FILE *fp;\
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define dl double
#define sf(n) scanf("%I64d",&n)
#define pf(n) printf("%I64d\n",n)
#define loop for(long long i=0;i<n;i++)
#define lp(b,n) for(long long i=b;i<=n;i++)
#define pb(n) push_back(n)
#define srt(v) sort(v.begin(),v.end())
ll mark[5010];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(),cout.tie();
	double x1, y1, x2, y2, x3, y3, x4, y4;
	while(cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4) {
		if(x1 == x3 && y1 == y3)
			printf("%.3lf %.3lf\n", (x2+x4)-x1, (y2+y4)-y1);
		else if(x1 == x4 && y1 == y4)
			printf("%.3lf %.3lf\n", (x2+x3)-x1, (y2+y3)-y1);
		else if(x2 == x3 && y2 == y3)
			printf("%.3lf %.3lf\n", (x1+x4)-x2, (y1+y4)-y2);
		else
			printf("%.3lf %.3lf\n", (x1+x3)-x2, (y1+y3)-y2);
	}
}
