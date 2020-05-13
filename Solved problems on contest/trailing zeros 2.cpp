#include<bits/stdc++.h>
using namespace std;
long long a[1000008]={0},prime[1000008]={0};
int main()
{
    long long b,c,d,e,t,n;
    for(long long int i=3;i*i<=1000000;i+=2)
        if(a[i]==0)
        {
            for(long long int j=i*i;j<=1000000;j=j+(i*2))
                a[j]=1;
        }
    prime[0]=2;
    for(int i=3,j=1;i<=1000000;i+=2)
        if(a[i]==0)
        {
            prime[j]=i;
            j++;
            e=j;
        }
    cin>>t;
    for(long long int x=1;x<=t;x++)
    {
        c=1;
        cin>>n;
        for(int i=0;i<e && prime[i]*prime[i]<=n;i++)
        {
            b=0;
            while(n%prime[i]==0)
            {
                b++;
                n=n/prime[i];
            }
            c=c*(b+1);
        }
        if(n>1)
            c=c*2;
        cout<<"Case "<<x<<": "<<c-1<<endl;
    }
}
