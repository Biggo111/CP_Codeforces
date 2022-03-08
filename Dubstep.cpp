#include<bits/stdc++.h>
using namespace std;
int main()
{
    string st,st2="WUB";
    cin>>st;
    int l = st.size();
    vector<char>v;
    int i=0;
    while(st[i]!='\0')
    {
        size_t pos = st.find(st2);
        if(pos!=st.npos)
        {
            st.erase(pos,st2.length());
            v.push_back('1');
        }
        else
        {
            v.push_back(st[i]);
        }
        i++;
    }
    for(auto x:v)cout<<x;
}
