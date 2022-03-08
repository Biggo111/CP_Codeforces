#include<bits/stdc++.h>
using namespace std;
int main()
{
    int coun=1;
    string st;
    cin>>st;
    for(int i=0; i<st.size(); i++)
    {
        if(st[i]==st[i+1])
        {
            coun++;
            if(coun==7)
            {
                //k=1;
                //break;
                cout<<"YES"<<endl;
                return 0;
            }
        }
        else
        {
            coun=1;
        }
    }
    cout<<"NO"<<endl;
    //if(k==0)cout<<"NO"<<endl;
    //else cout<<"YES"<<endl;
}
