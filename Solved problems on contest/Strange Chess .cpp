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
    ll n,s=0,b;
    cin>>n;
    char c[n+10][n+10];
    for(ll i=1; i<=n; i++)
    {
        for(ll j=1; j<=n; j++)
        {
            if((i%2==0 && j%2!=0) ||(i%2!=0 && j%2==0))
                c[i][j]='.';
            else
            {
                c[i][j]='C';
                s++;
            }
        }
    }
    cout<<s<<endl;
    for(ll i=1; i<=n; i++)
    {
        for(ll j=1; j<=n; j++)
        {
            cout<<c[i][j];
        }
        cout<<endl;
    }

}

