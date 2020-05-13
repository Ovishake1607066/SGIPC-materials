#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define l 10000000
long long a[10000000],prime[10000000];
bool isPrime(ll n)
{
    // Corner cases
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;

    // This is checked so that we can skip
    // middle five numbers in below loop
    if (n % 2 == 0 || n % 3 == 0)
        return false;

    for (ll i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;

    return true;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(),cout.tie();
    ll e;
    for(ll i=3;i*i<=l;i+=2)
        if(a[i]==0)
            for(ll j=i*i;j<=l;j=j+(i*2))
                a[j]=1;
    prime[0]=2;
    for(ll i=3,j=1;i<=l;i+=2)
        if(a[i]==0)
    {
        prime[j++]=i;
        e=j;
    }
    ll n;
    cin>>n;
    ll c=0,d=0;
    if(isPrime(n) || n==1)
    {
        cout<<n<<endl;
        return 0;
    }
    else
    {
        for(ll i=0;i<e;i++)
        {
            if(n%prime[i]==0)
            {
                c++;
                d=prime[i];
                while(n%prime[i]==0)
                    n/=prime[i];
            }
        }
    }
    if(n!=1)
        c++;
    if(c==1)
        cout<<d<<endl;
    else
    cout<<1<<endl;

}
