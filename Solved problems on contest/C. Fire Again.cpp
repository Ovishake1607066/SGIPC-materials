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
ll mark[2010][2010];
ll mx[4]={0,0,1,-1};
ll my[4]={1,-1,0,0};
ll vis[2010][2010];
pair<ll,ll>p;
queue<pair<ll,ll> >q;
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    ios::sync_with_stdio(false);
    cin.tie(),cout.tie();
    ll m,n;
    cin>>m>>n;
    ll k;
    cin>>k;
    for(ll i=0;i<k;i++)
    {
        ll x,y;
        cin>>x>>y;
        q.push(make_pair(x,y));
        mark[x][y]=1;
        vis[x][y]=1;
    }
    ll ans=1;
    while(!q.empty())
    {
        p=q.front();
        q.pop();
        //cout<<p.first<<p.second<<endl;
        for(ll i=0;i<4;i++)
        {
            ll xx=p.first+mx[i];
            ll yy=p.second+my[i];
            //cout<<xx<<yy<<endl;
            if(xx>=1 && xx<=m && yy>=1 && yy<=n && !vis[xx][yy])
            {
                mark[xx][yy]=mark[p.first][p.second]+1;
                vis[xx][yy]=1;
                q.push(make_pair(xx,yy));
                ans=max(ans,mark[xx][yy]);
            }
        }
    }
    for(ll i=1;i<=m;i++)
    {
        for(ll j=1;j<=n;j++)
        {
            if(mark[i][j]==ans)
            {
                cout<<i<<" "<<j<<endl;
                return 0;
            }
        }
    }
}

