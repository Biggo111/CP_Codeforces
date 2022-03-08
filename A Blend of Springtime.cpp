#include<bits/stdc++.h>
using namespace std;
int main()
{
    string st;
    int k=0;
    cin>>st;
    for(int i=0;i<st.size();i++)
    {
        if(st[i]=='B' && st[i+1]=='A' && st[i+2]=='C')
        {
            k = 1;
            break;
        }
        else if(st[i]=='A' && st[i+1]=='B' && st[i+2]=='C')
        {
            k = 1;
            break;
        }
        else if(st[i]=='C' && st[i+1]=='B' && st[i+2]=='A')
        {
            k = 1;
            break;
        }
        else if(st[i]=='B' && st[i+1]=='C' && st[i+2]=='A')
        {
            k = 1;
            break;
        }
        else if(st[i]=='A' && st[i+1]=='C' && st[i+2]=='B')
        {
            k = 1;
            break;
        }
        else if(st[i]=='C' && st[i+1]=='A' && st[i+2]=='B')
        {
            k = 1;
            break;
        }
    }
    if(k==0)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}
