#include<bits/stdc++.h>
using namespace std;
int main()
{
    string st;
    int k=0;
    cin>>st;
    for(int i=0;i<st.size();i++)
    {
        if(st[i]=='4' || st[i]=='7')
        {
            k++;
        }
    }
    if(k==4 || k==7)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
