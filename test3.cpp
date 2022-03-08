#include<bits/stdc++.h>
using namespace std;
int main()
{
    string st,st2="WUB";
    cin>>st;
    int l = st.size();
    for(int i=0; i<l; i++)
    {
        for(int j=0; j<st2.size(); j++)
        {
            if(st[i]=='W' && st[i+1]=='U' && st[i+2]=='B')
            {
                st.erase();
                st.erase();
                st.erase();
            }
        }
    }
//    while(l--)
//    {
//    size_t pos = st.find(st2);
//    if(pos!=st.npos)
//    {
//        st.erase(pos,st2.length());
//    }
//    }
    cout<<st;
}

