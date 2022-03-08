#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define check freopen("in.txt", "r", stdin);
#define biggo ios_base::sync_with_stdio(false);cin.tie(0),cout.tie(0)
int main()
{
    int n,t,s=1;
    cin>>n>>t;
    if(n==1 && t==10)cout<<"-1"<<endl;
    else if(n>=2 && t==10)
    {
        for(int i=1;i<n;i++)
        {
            cout<<"1";
        }
        cout<<"0"<<endl;
    }
    else
    {
        for(int i=1;i<=n;i++)
        {
            cout<<t;
        }
        cout<<endl;
    }
}
