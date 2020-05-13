#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,a,b,c,s;
    cin>>t;
    while(t--)
    {
        cin>>n;
        b=sqrt(n);
        s=0;
        if(n==1)
        {
            cout<<0<<endl;
            continue;
        }
        for(int i=1;i<=b;i++)
        {
            if(n%i==0)
            {
                if(i==1)
                {
                    s=s+1;
                    continue;
                }
                if(i==b && i*i==n)
                    s=s+i;
                else
                    s=s+i+(n/i);
            }
        }
        cout<<s<<endl;
    }
}
