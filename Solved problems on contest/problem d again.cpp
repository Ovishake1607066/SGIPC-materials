#include<bits/stdc++.h>
using namespace std;
int a[170000];
int main()
{
    long long n=163900,i,j,k,b[15010],c,d,sq;
    a[0]=1;
    a[1]=1;
    sq=sqrt(n);
    for(i=4;i<n;i+=2)
        a[i]=1;
    for(i=3;i<sq;i+=2)
    {
        if(a[i]==0)
        {
            for(j=i*i;j<=n;j+=i)
                a[j]=1;
        }
    }
    for(i=0,j=0;i<=n;i++)
    {
        if(a[i]==0)
        {
            b[j]=i;
            j++;
        }
    }
    cin>>k;
    for(i=0;i<k;i++)
    {
        cin>>d;
        cout<<b[d-1]<<endl;
    }
}
