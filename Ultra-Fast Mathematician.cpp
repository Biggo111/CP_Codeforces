#include<bits/stdc++.h>
using namespace std;
int main()
{
    string st,st2;
    cin>>st>>st2;
    int l = st.size();
    for(int i=0;i<l;i++)
    {
        if(st[i]==st2[i])
        {
            st[i] = '0';
        }
        else
        {
            st[i] = '1';
        }
    }
    cout<<st<<endl;
}
