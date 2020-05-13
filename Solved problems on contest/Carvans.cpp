#include<bits/stdc++.h>
#define ll long long
#define loop for(ll i=0;i<t;i++)
#define loop2 for(ll j=0;j<m;j++)
using namespace std;
int main()
{
    ll t,m,a,b,c,d;
    scanf("%lld",&t);
    loop
    {
        scanf("%lld",&m);
        c=0;
        a=0;
        loop2
        {
            scanf("%lld",&b);
            if(j==0)
            {
                a=b;
                c++;
            }
            else if(b<=a)
            {
                a=b;
                c++;
            }
            else if(b>a)
                {
                    a=a;
                }
        }
        printf("%lld\n",c);
    }
}
