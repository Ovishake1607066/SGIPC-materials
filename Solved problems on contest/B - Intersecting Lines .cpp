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
    cout<<"INTERSECTING LINES OUTPUT"<<endl;
    while(n--)
    {
        ll x1,x2,x3,x4,y1,y2,y3,y4;
        cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
        double a1,b1,c1,a2,b2,c2,s1,s2,s3,s4;
        a1=y1-y2;
        b1=(x1-x2)*(-1);
        c1=x1*(y1-y2)-y1*(x1-x2);
        a2=y3-y4;
        b2=(x3-x4)*(-1);
        c2=x3*(y3-y4)-y3*(x3-x4);
        s1=(x1-x2);
        s2=(y1-y2);
        s3=(x3-x4);
        s4=(y3-y4);
        //cout<<(((x1*y2-x2*y1)+(x2*y3-x3*y2)+(x3*y4-x4*y3)+(x4*y1-x1*y4))*.5)<<endl;
        if((s1*s4)-(s2*s3)==0 && (a1*b2 - a2*b1)!=0)
        {
            cout<<"LINE"<<endl;
        }
        else if((a1*b2 - a2*b1)==0)
        {
            cout<<"NONE"<<endl;
        }
        else
        {
            printf("POINT %.2lf %.2lf\n",(double)(c1*b2 - c2*b1)/(a1*b2 - a2*b1),(double)(a1*c2 - a2*c1)/(a1*b2 - a2*b1));
        }
    }
    cout<<"END OF OUTPUT"<<endl;
}

