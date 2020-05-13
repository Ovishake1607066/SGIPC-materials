#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,b,c,d,e,f=0,g;
    while(cin>>b && b!=0)
    {
        long long int a[100000];
        c=0;
        f=0;
        for(int i=0,j=0; ;i++)
        {
            if(i==0)
            {
                c=b;
                continue;
            }
            cin>>b;
            if(b==0)
                break;
            a[j]=abs(b-c);
            j++;
            c=b;
            f++;
        }
        for(int i=0;i<f;i++)
        {
            if(f==1)
            {
                d=a[i];
                break;
            }
            if(i==0)
                {
                    d=__gcd(a[i],a[i+1]);
                    i++;
                }
            else
                d=__gcd(d,a[i]);
        }
        cout<<d<<endl;
    }
}
