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
        string s;
        cin>>s;
        int a=0,b=0,c=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='A')a++;
            else if(s[i]=='B')b++;
            else c++;
        }
        int k = a+c;
        if(b!=k)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
}
