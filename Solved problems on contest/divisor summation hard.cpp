#include<bits/stdc++.h>
using namespace std;
long long a[100000008],prime[100000008];
int main()
{
    long long t,n,e,f,g,s=1,h,m;
    for(long long i=3;i*i<=100000009;i+=2)
    {
        if(a[i]==0)
        {
            for(long long j=i*i;j<=100000009;j=j+(i*2))
            {
                a[j]=1;
            }
        }
    }
    prime[0]=2;
    for(long long i=3,j=1;i<=100000009;i+=2)
    {
        if(a[i]==0)
        {
            prime[j]=i;
            j++;
            e=j;
        }
    }
    cin>>t;
    while(t--)
    {
        cin>>n;
        f=n;
        s=1;
        g=1;
        for(long long i=0;i<e && prime[i]*prime[i]<=n;i++)
        {
            if(n%prime[i]==0)
            {
                g=1;
                while(n%prime[i]==0)
                {
                    n=n/prime[i];
                    g++;
                }
                s=s*((pow(prime[i],g)-1)/(prime[i]-1));
            }
        }
        if(n!=1)
            s=s*(n+1);
        cout<<s-f<<endl;
    }
}
