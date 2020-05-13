#include<bits/stdc++.h>
using namespace std;
#define read FILE *fp;\
fp=freopen("testcase.txt","r",stdin);
#define ll long long
#define ull unsigned long long
#define sf(n) scanf("%I64d",&n)
#define pf(n) printf("%I64d\n",n)
#define loop for(long long i=0;i<n;i++)
#define lp(b,n) for(long long i=b;i<=n;i++)
#define pb(n) push_back(n)
#define srt(v) sort(v.begin(),v.end())
#define rvs(v) sort(v.begin(), v.end(), greater<long long>());
#define F first
#define S second
#define mp(a,b) make_pair(a,b);
#define fio ios::sync_with_stdio(false); cin.tie(),cout.tie();
ll mark[5010];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(),cout.tie();
    ll x;
    while(cin>>x)
    {
        x=x*10000000;
        ll n,c=0;
        cin>>n;
        pair<ll,ll>p;
        ll a[n+10];
        loop
        {
            cin>>a[i];
        }
        sort(a,a+n);
        for(ll i=0;i<n-1;i++)
        {
            for(ll j=n-1;j>i;j--)
            {
                if(a[i]+a[j]==x)
                {
                    if(abs(a[j]-a[i])>c)
                    {
                        p=make_pair(a[i],a[j]);
                        c=abs(a[j]-a[i]);
                    }
                    break;
                }
            }
        }
        if(!c)
            cout<<"danger"<<endl;
        else
            cout<<"yes "<<p.first<<" "<<p.second<<endl;
    }
}
