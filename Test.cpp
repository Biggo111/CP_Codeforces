#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int coun=0;
        string st;
        int l = st.size();
        cin>>st;
        if(st[0]=='1')coun++;
        for(int i=0;i<st.size();i++)
        {
            if(st[i]=='1' && st[i-1]=='0')
            {
                coun++;
            }
        }
        cout<<coun<<endl;
    }
}

