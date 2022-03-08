#include<bits/stdc++.h>
using namespace std;
int main()
{
    int coun=0,COUN=0;
    string st;
    cin>>st;
    for(int i=0;i<st.size();i++)
    {
        if(st[i]>='A' && st[i]<='Z')
        {
            COUN++;
        }
        else
        {
            coun++;
        }
    }
    if(coun>=COUN)
    {
        for(int i=0;i<st.size();i++)
        {
            if(st[i]>='A' && st[i]<='Z')
            {
                st[i] = st[i] + 32;
            }
        }
    }
    else
    {
        for(int i=0;i<st.size();i++)
        {
            if(st[i]>='a' && st[i]<='z')
            {
                st[i] = st[i] - 32;
            }
        }
    }
    for(auto x : st)cout<<x;
}
