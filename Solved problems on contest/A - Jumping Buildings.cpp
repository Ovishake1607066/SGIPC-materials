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
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(),cout.tie();
    ll n;
    cin>>n;
    ll a[n+10];
    for(ll i=1; i<=n; i++)
        cin>>a[i];
    ll ans[n+10];
    for(ll i=1;i<=n;i++)
        ans[i]=n+1;
    stack<pair<ll,ll> >s1,s2;
    s1.push(make_pair(10000000000,0));
    for(ll i=1;i<=n;i++)
    {
        if(s1.top().first<a[i])
        {
            while(s1.top().first<a[i])
            {
                ans[s1.top().second]=i;
                s1.pop();
            }
        }
        s1.push(make_pair(a[i],i));
    }
    for(ll i=1;i<=n;i++)
    {
        cout<<min(a[i],ans[i]-i-1)<<" ";
    }
}

