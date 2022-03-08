#include <bits/stdc++.h>
using namespace std ;
int main()
{
    int tc;
    cin>>tc;
    map<string,int>mp;
    int mx=-1;
    string Ans="";
    while(tc--)
    {
        string s;
        cin>>s;
        mp[s]++;
    }
        for(auto it: mp)
        {
            if(it.second>=mx)mx=it.second;
        }
        for(auto it: mp)
        {
            if(it.second==mx)
            {
                Ans=it.first;
            }
        }
        cout<<Ans<<endl;
}
