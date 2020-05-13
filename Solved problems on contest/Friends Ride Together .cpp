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
    ll c[10]={0},s=0,a,b,d;
    loop
    {
        cin>>a;
        c[a]++;
    }
    s+=c[4];
    c[1]-=c[3];
    s+=c[3];
    c[2]*=2;
    if(c[1]>0)
        c[2]+=c[1];
    if(c[2]%4==0)
        s+=c[2]/4;
    else
        s+=c[2]/4+1;
    cout<<s<<endl;


}
