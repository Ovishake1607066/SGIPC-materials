#include<bits/stdc++.h>
using namespace std;
long long a[100000]={0},prime[10000]={0};
int main()
{
    long long b,c,d,e,t,n,f;
    for(long long int i=3;i*i<=3200;i+=2)
        if(a[i]==0)
        {
            for(long long int j=i*i;j<=3200;j=j+(i*2))
                a[j]=1;
        }
    prime[0]=2;
    for(long long int i=3,j=1;i<=3200;i+=2)
        if(a[i]==0)
        {
            prime[j]=i;
            j++;
            e=j;
        }
        cin>>t;
        while(t--)
        {
            cin>>n;
            b=0;
            c=0;
            d=0;
            for(long long int i=0;i<e && prime[i]*prime[i]<=n;i++)
            {
                if(n%prime[i]==0)
                {
                    b=0;
                while(n%prime[i]==0)
                {
                    b++;
                    n=n/prime[i];
                }
                if(b%2==0)
                    c++;
                else
                    d++;
                }
            }
            if(n!=1)
                d++;
            if(c>d)
                cout<<"Psycho Number"<<endl;
            else
                cout<<"Ordinary Number"<<endl;
        }
}
