#include<bits/stdc++.h>
using namespace std;
int main()
{
    string st,st2="WUB";
    cin>>st;
    vector<char>v;
    int l = st.size();
    int j=0;
    for(int i=0; i<l; i++)
    {
        if(st[i]=='W' && st[i+1]=='U' && st[i+2]=='B')
        {
            if(i>0 && j==0)
            {
                v.push_back('1');
                i+=2;
                j=1;
            }
            else
            {
                i+=2;
            }
        }
        else
        {
            j=0;
            v.push_back(st[i]);
        }
    }
    for(int i=0; i<v.size(); i++)
    {
        if(v[i]!='1')
        {
            cout<<v[i];
        }
        else
        {
            cout<<" ";
        }
    }
}
