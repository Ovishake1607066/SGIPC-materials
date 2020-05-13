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
        string s1,s2,t1="",t2="";
        ll a=0,b=0,c=0;
        cin>>s1>>s2;
        for(ll i=0;i<n;i++)
        {
            if(s1[i]!=s2[i])
            {
                c++;
                string ss(1,s1[i]);
                t1+=ss;
                string ss2(1,s2[i]);
                t2+=ss2;
            }
        }
        if(c==2)
        {
            if(t1[0]==t1[1] && t2[0]==t2[1])
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
        }
                    else
                cout<<"No"<<endl;
    }
}

