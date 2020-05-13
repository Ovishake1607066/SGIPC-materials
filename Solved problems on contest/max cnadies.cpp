#include<bits/stdc++.h>
#define ll long long
#define loop for(ll i=0;i<t;i++)
#define loop2 for(ll j=0;j<n;j++)
using namespace std;
int main()
{
    ll t,n,k,s;
    scanf("%lld",&t);
    deque<ll>d;
    deque<ll>::iterator it;
    loop
    {
        scanf("%lld %lld",&n,&k);
        //cout<<n<<endl;
        loop2
        {
            scanf("%lld",&s);
            d.push_back(s);
            //cout<<endl<<s<<endl;
        }
        //cout<<d.size()<<endl;
        for(ll l=0;l<n-k+1;l++)
        {
            it=d.begin();
            ll m=*it;
            ll x=0;
            for(it;x<k;it++,x++)
            {
                if(*it>m)
                    m=*it;
            }
            if(l<n-k)
                printf("%lld ",m);
            else
                printf("%lld",m);
            d.pop_front();
        }
        printf("\n");
        d.clear();
    }
}
