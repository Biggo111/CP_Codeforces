#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define check freopen("in.txt", "r", stdin);
#define biggo ios_base::sync_with_stdio(false);cin.tie(0),cout.tie(0)
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s,s2;
        cin>>s>>s2;
        int k = 0;
        for(int i=0;i<s.size();i++)
        {
            for(int j=0;j<s2.size();j++)
            {
                if(s[i]==s2[j])
                {
                    k = 1;
                }
            }
        }
        if(k==1)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
