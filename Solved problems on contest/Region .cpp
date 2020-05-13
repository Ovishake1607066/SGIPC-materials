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
    ll n;
    cin>>n;
    while(n--)
    {
        double r1,r2,r3,a,b,c,a1,b1,c1,s1,s2,s3,s,ss;
        cin>>r1>>r2>>r3;
        a=r1+r2;
        b=r2+r3;
        c=r1+r3;
        s=(a+b+c)/2.0;
        ss=sqrt(s*(s-a)*(s-b)*(s-c));
        a1=acos((a*a+c*c-b*b)/(2*a*c));
        b1=acos((a*a+b*b-c*c)/(2*a*b));
        c1=acos((b*b+c*c-a*a)/(2*b*c));
        s1=a1*r1*r1*.5;
        s2=b1*r2*r2*.5;
        s3=c1*r3*r3*.5;
        printf("%.6lf\n",ss-s1-s2-s3);
    }
}

