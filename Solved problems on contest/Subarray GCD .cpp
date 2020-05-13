#include<bits/stdc++.h>
#define ll long long
#define loop for(ll i=0;i<n;i++)
#define loop2 for(ll j=0;j<m1;j++)
using namespace std;
int main()
{
    ll t,n,a,b,c=-1,d;
    //cout<<long long(3.3);
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        for(ll i=0;i<n;i++)
        {
            if(i==0)
                scanf("%lld",&a);
            else if(i==1)
            {
                scanf("%lld",&b);
                d=__gcd(a,b);
                if(d==1)
                    c=n;
            }
            else
            {
                scanf("%lld",&b);
                if(c==n)
                    continue;
                if(__gcd(d,b)==1)
                {
                    c=n;
                }
                a=b;
            }
        }
        printf("%lld\n",c);
        c=-1;
    }
}
