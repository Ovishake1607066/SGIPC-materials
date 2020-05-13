#include<bits/stdc++.h>
using namespace std;
long long int b[1000008];
int main()
{
    for(long long int i=1;i<=1000000;i++)
    {
        b[i]=i;
    }
    for(long long int i=2;i<=1000000;i++)
    {
        if(b[i]==i)
        {
            for(long long int j=i;j<=1000000;j+=i)
                {
                    b[j]=b[j]-(b[j]/i);
                }
        }
    }
    long long int t,n,a;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cout<<b[n]<<endl;
    }
}
