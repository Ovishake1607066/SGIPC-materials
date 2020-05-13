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
    ll a[4],b,c,d,e;
    for(ll i=0; i<4; i++)
        cin>>a[i];
    sort(a,a+4);
    if(a[0]+a[1]>a[2] && a[1]+a[2]>a[0] && a[0]+a[2]>a[1])
        cout<<"TRIANGLE"<<endl;
    else if(a[3]+a[1]>a[2] && a[1]+a[2]>a[3] && a[3]+a[2]>a[1])
        cout<<"TRIANGLE"<<endl;
    else if(a[0]+a[1]==a[2] || a[1]+a[2]==a[3])
        cout<<"SEGMENT"<<endl;
    else
        cout<<"IMPOSSIBLE"<<endl;


}

