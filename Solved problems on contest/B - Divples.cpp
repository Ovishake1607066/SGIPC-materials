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
bool sortbysec(const pair<pair<ll,ll>,ll> &a,
               const pair<pair<ll,ll>,ll> &b)
{
    return (a.second < b.second);
}
ll mark[5010];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(),cout.tie();
    ll a,b,x=1,y;
    cin>>a>>b;
    vector<ll>v;
    y=sqrt(a);
    for(ll i=1; i<=y; i++)
    {
        if(a%i==0)
        {

            if(i%b==0)
                v.push_back(i);
            if(a/i!=i)
            {
                if((a/i)%b==0)
                    v.push_back(a/i);
            }
        }
    }
    srt(v);
    for(ll i=0; i<v.size(); i++)
        cout<<v[i]<<endl;
}

