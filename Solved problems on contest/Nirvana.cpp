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
    ll n,a,b,c=1,d=0,e=0,s=0,f,g;
    cin>>n;
    if(n<10)
    {
        cout<<n<<endl;
        return 0;
    }
    a=n;
    while(a)
    {
        b=a%10;
        e=b;
        d++;
        a=a/10;
        //cout<<c<<endl;
    }
    c=1;
    a=n;
    for(ll i=0; i<1000000; i++)
    {
        c=1;
        f=a;
        if(f<1)
            break;
        while(f)
        {
            b=f%10;
            c=c*b;
            f=f/10;
        }
        s=max(c,s);
        a--;
        //cout<<a<<"  "<<s<<endl;
    }
    s=max(c,s);
    c=1;
    for(ll i=0; i<d-1; i++)
    {
        c=c*9;
    }
    if(e!=1)
        c=c*(e-1);
    cout<<max(c,s)<<endl;
}

