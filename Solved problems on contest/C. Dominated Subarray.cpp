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
ll mark[1000000];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(),cout.tie();
    ll t,x=0;
    cin>>t;
    while(t--)
    {
        for(ll i=0;i<=x;i++)
            mark[i]=0;
        ll n;
        cin>>n;
        x=n;
        ll a[n],b=0,c=100000000,d=0;
        loop
        {
            cin>>b;
            if(mark[b])
            {
                c=min(c,i+1-mark[b]);
                d=1;
            }
            mark[b]=i+1;
           // cout<<mark[b]<<endl;
        }
        if(!d)
            cout<<-1<<endl;
        else
            cout<<c+1<<endl;
    }
}

