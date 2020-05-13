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
    ll k;
    cin>>k;
    while(k--)
    {
        ll n;
        cin>>n;
        ll a[n+10],b=0,d=100000,e=0;
        loop
        {
            cin>>a[i];
        }
        for(ll i=1000;i>=1;i--)
        {
            ll c=0;
            for(ll j=0;j<n;j++)
            {
                if(a[j]>=i)
                    c++;
            }
            //cout<<c<<" "<<i<<endl;
            if(c>=i)
            {
                cout<<i<<endl;
                break;
            }
        }
    }
}
