#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int k=0;
        string st;
        cin>>st;
        string st2=st;
        reverse(st2.begin(),st2.end());
        int l = st.size();
        sort(st.begin(),st.end());
        if(st[0]==st[l-1])cout<<"-1"<<endl;
        else cout<<st<<endl;
    }
}

