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
        int l = st.size();
        string st2 = st;
        reverse(st.begin(),st.end());
        if(st==st2)k = 1;
        if(k==1)
        {
            int f=0;
            for(int i=0;i<st.size();i++)
            {
                if(st[i]==st[i+1])
                {
                    f = 1;
                    //break;
                }
            }
            if(f==0)
            {
                for(int i=0;i<l;i++)
                {
                    swap(st[l-1],st[l-2]);
                }
                cout<<st<<endl;
            }
            else
            {
                cout<<"-1"<<endl;
            }
        }
        else
        {
            cout<<st2;
        }
    }
}
