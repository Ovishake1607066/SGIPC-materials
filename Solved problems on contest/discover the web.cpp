#include<bits/stdc++.h>
#define ll long long
#define loop for(ll i=0;i<t;i++)
#define loop2 for(ll j=0; ;j++)
using namespace std;
int main()
{
    stack<string>s1;
    stack<string>s2;
    string st4;
    ll t;
    st4="http://www.lightoj.com/";
    s1.push(st4);
    scanf("%lld",&t);
    string st,st2,st3,ss;
    loop
    {
        cout<<"Case"<<" "<<i+1<<":"<<endl;
        while(cin>>st)
        {
            //cout<<"lop"<<endl;
            //cout<<ss<<endl;
            //system("pause");
            //cin.ignore();
            //cout<<st<<endl;
            //system("pause");
            if(st=="VISIT")
            {
                if(!st4.empty())
                    s1.push(st4);
                //cin>>ss;
                cin>>st3;
                st4=st3;
                //system("pause");
                while(!s2.empty())
                    s2.pop();
                cout<<st4<<endl;
            }
            else if(st=="BACK")
            {

                if(s1.empty())
                    cout<<"Ignored"<<endl;
                else
                {
                    s2.push(st4);
                    st4=s1.top();
                    s1.pop();
                    cout<<st4<<endl;
                }
            }
            else if(st=="FORWARD")
            {

                if(s2.empty())
                    cout<<"Ignored"<<endl;
                else
                {
                    s1.push(st4);
                    st4=s2.top();
                    s2.pop();
                    cout<<st4<<endl;
                }
            }
            else if(st=="QUIT")
                {
                    break;
                }
        }
    }
    system("pause");
}
