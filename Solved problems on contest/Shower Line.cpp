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
vector<ll>v[10];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(),cout.tie();
    ll a[5][5],b=0,c=0;
    for(ll i=0; i<5; i++)
        for(ll j=0; j<5; j++)
            cin>>a[i][j];

    for(ll i=0; i<5; i++)
        for(ll j=0; j<5; j++)
        {
            v[i].push_back(a[i][j]+a[j][i]);
        }
    ll s[5]= {1,2,3,4,5};
    do
    {
        ll a1=s[0]-1,a2=s[1]-1,a3=s[2]-1,a4=s[3]-1,a5=s[4]-1;
        c=v[a1][a2]+v[a2][a3]+2*v[a3][a4]+2*v[a4][a5];
        b=max(b,c);
    }
    while(next_permutation(s,s+5));
    cout<<b<<endl;
}

