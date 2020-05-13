#include<bits/stdc++.h>
#define Lim  1000000
using namespace std;
long long a1[1000010] ;
long long a2[1000010];
void totient()
{
    for(int i=1; i<=Lim; i++)
        a1[i]=i;
    for(int i=2; i<=Lim; i++)
        if(a1[i]==i)
            for(int j=i; j<=Lim; j+=i)
                a1[j]-=a1[j]/i;
    for(int i=1; i<=Lim; i++)
        for (int j=i; j<=Lim; j+=i)
            a2[j]+= i*a1[i];
}
int main()
{
    totient();
    long long int sum,n,t,i,sqt;
    cin>>t;
    for(long long i=0; i<t; i++)
    {
        cin>>n;
        sum=(1+a2[n])*n/2;
        cout<<sum<<endl;
    }
}
