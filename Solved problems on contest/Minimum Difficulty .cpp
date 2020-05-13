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
    ll a[n],s[n],b,c=1000000,d=100000,m=0;
    loop
    {
        cin>>a[i];
    }
    for(ll i=0;i<n-1;i++)
    {
        s[i]=a[i+1]-a[i];
        c=min(c,s[i]);
        m=max(m,s[i]);
    }
    for(ll i=0;i<n-1;i++)
    {
        if(s[i]==c)
        {
            if(i!=n-1)
                d=min(d,s[i]+s[i+1]);
            if(i!=0)
                d=min(d,s[i]+s[i-1]);
        }
    }
   // cout<<m<<endl<<d<<endl;
    cout<<max(m,d)<<endl;
}


