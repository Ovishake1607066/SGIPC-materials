#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,a[200],b,c,d,e=0,s;
    for(int i=2,k=0;i<=100;i++)
    {
        b=0;
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
            {
                b=1;
                break;
            }
        }
        if(b==0)
        {
            a[k]=i;
            k++;
            d=k;
        }
    }
    cin>>t;
    for(int l=1;l<=t;l++)
    {
        cin>>n;
        cout<<"Case "<<l<<": "<<n<<" = ";
        c=0;
        e=0;
        for(int i=0;i<d;i++)
        {
            c=0;
            for(int j=1;j<=n;j++)
            {
                s=j;
                while(s%a[i]==0)
                {
                    c++;
                    s=s/a[i];
                }
            }
            if(e==1 && c!=0)
                cout<<" * ";
            if(c!=0)
            {
                cout<<a[i]<<" ("<<c<<")";
                e=1;
            }
        }
        cout<<endl;
    }
}
