#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,k,a,b,c,d=0;
        cin>>n>>m;
        a=n-m;
        if(a==0)
        {
            cout<<n<<endl;
        }
        else
        {
            while(n--)
            {
                cin>>b;
                if(b==a)
                {
                    d=1;
                    cout<<n-a<<endl;
                    break;
                }
                if(d!=1)
                {
                    while(1)

                }

            }
        }

    }
}
