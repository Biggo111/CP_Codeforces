#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        char st[n];
        for(int i=0; i<n; i++)
        {
            cin>>st[i];
        }
        int a=0,k=0;
        map<char,int>mp;
        for(int i=0;i<n;i++)
        {
            mp[st[i]]++;
            if(mp[st[i]]>1 && st[i]!=st[i-1])
            {
                a = 1;
                break;
            }
            else
            {
                a = 0;
            }
        }
        //for(auto x:mp)cout<<x.first<<" "<<x.second<<endl;
        if(a==1)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
}
