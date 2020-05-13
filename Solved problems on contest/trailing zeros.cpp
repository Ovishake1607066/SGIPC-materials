#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,a,b,c;
    cin>>t;
    for(long long int x=1;x<=t;x++)
    {
        cin>>n;
        c=0;
        b=sqrt(n);
        for(long long i=2;i<=b;i++)
        {
            if(i==b && n%i==0)
                c++;
            else if(n%i==0)
            {
                c+=2;5
            }
        }
        cout<<"Case "<<x<<": "<<c+1<<endl;
    }
}
