#include<bits/stdc++.h>
#define ll long long
#define loop for(ll i=0;i<n;i++)
#define loop2 for(ll j=0;j<m1;j++)
using namespace std;
int main()
{
    string s;
    ofstream cou("output.txt");
    while(cin>>s)
    {
        ll a,b,c,d,e,sm=0;
        a=s.size();
        if(s[0]<='9' && s[0]>='0')
        {
            stack<string>st;
            for(ll i=s.size()-1; i>=0; i--)
            {
                if(i==s.size()-1)
                {
                    if(s[i]=='1')
                    {
                        st.push("I");
                    }
                    else if(s[i]=='2')
                    {
                        st.push("II");
                    }
                    else if(s[i]=='3')
                    {
                        st.push("III");
                    }
                    else if(s[i]=='4')
                    {
                        st.push("IV");
                    }
                    else if(s[i]=='5')
                    {
                        st.push("V");
                    }
                    else if(s[i]=='6')
                    {
                        st.push("VI");
                    }
                    else if(s[i]=='7')
                    {
                        st.push("VII");
                    }
                    else if(s[i]=='8')
                    {
                        st.push("VIII");
                    }
                    else if(s[i]=='9')
                    {
                        st.push("IX");
                    }
                }
                else if(i==s.size()-2)
                {
                    if(s[i]=='1')
                    {
                        st.push("X");
                    }
                    else if(s[i]=='2')
                    {
                        st.push("XX");
                    }
                    else if(s[i]=='3')
                    {
                        st.push("XXX");
                    }
                    else if(s[i]=='4')
                    {
                        st.push("XL");
                    }
                    else if(s[i]=='5')
                    {
                        st.push("L");
                    }
                    else if(s[i]=='6')
                    {
                        st.push("LX");
                    }
                    else if(s[i]=='7')
                    {
                        st.push("LXX");
                    }
                    else if(s[i]=='8')
                    {
                        st.push("LXXX");
                    }
                    else if(s[i]=='9')
                    {
                        st.push("XC");
                    }
                }
                else if(i==s.size()-3)
                {
                    if(s[i]=='1')
                    {
                        st.push("C");
                    }
                    else if(s[i]=='2')
                    {
                        st.push("CC");
                    }
                    else if(s[i]=='3')
                    {
                        st.push("CCC");
                    }
                    else if(s[i]=='4')
                    {
                        st.push("CD");
                    }
                    else if(s[i]=='5')
                    {
                        st.push("D");
                    }
                    else if(s[i]=='6')
                    {
                        st.push("DC");
                    }
                    else if(s[i]=='7')
                    {
                        st.push("DCC");
                    }
                    else if(s[i]=='8')
                    {
                        st.push("DCCC");
                    }
                    else if(s[i]=='9')
                    {
                        st.push("CM");
                    }
                }
                else if(i==s.size()-4)
                {
                    if(s[i]=='1')
                    {
                        st.push("M");
                    }
                    else if(s[i]=='2')
                    {
                        st.push("MM");
                    }
                    else if(s[i]=='3')
                    {
                        st.push("MMM");
                    }
                }
            }
            while(!st.empty())
            {
                cout<<st.top();
                st.pop();
            }
        }
        else
        {
            for(ll i=s.size()-1; i>=0; i--)
            {
                //cout<<s[i]<<endl;
                if(s[i]=='I')
                {
                    if((s[i+1]=='V' || s[i+1]=='X') && i+1<s.size())
                        sm=sm-1;
                    else
                        sm=sm+1;
                }
                else if(s[i]=='V')
                {
                    sm=sm+5;
                }
                else if(s[i]=='X')
                {
                    if((s[i+1]=='L' || s[i+1]=='C') && i+1<s.size())
                        sm=sm-10;
                    else
                        sm=sm+10;
                }
                else if(s[i]=='L')
                {
                    sm=sm+50;
                }
                else if(s[i]=='C')
                {
                    if((s[i+1]=='D' || s[i+1]=='M') && i+1<s.size())
                        sm=sm-100;
                    else
                        sm=sm+100   ;
                }
                else if(s[i]=='D')
                {
                    sm=sm+500;
                }
                else if(s[i]=='M')
                {
                    sm=sm+1000;
                }
                //cout<<sm<<endl;
            }
            cout<<sm;
        }
        cout<<endl;
    }
}

