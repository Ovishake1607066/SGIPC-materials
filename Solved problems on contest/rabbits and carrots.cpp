#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k,c=0,a,b;
    long long int ar,i,j,l;
    cin>>t;
    for(i=0;i<t;i++)
    {
        c=0;
        cin>>n>>k;
        for(j=0;j<n;j++)
        {
            cin>>ar;
                for(l=0; ; l++)
                {
                    if(ar==1)
                        {
                            c=c+1;
                            break;
                        }
                    if(ar%k==0)
                        ar=ar/k;
                    else
                        break;
                }
        }
        cout<<c<<endl;
    }
}
