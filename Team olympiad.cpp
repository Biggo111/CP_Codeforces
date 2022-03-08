#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define check freopen("in.txt", "r", stdin);
#define biggo ios_base::sync_with_stdio(false);cin.tie(0),cout.tie(0)
int main()
{
    int n,a;
    vector<int>v1,v2,v3;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a;
        if(a==1)v1.push_back(i);
        else if(a==2)v2.push_back(i);
        else if(a==3)v3.push_back(i);
    }
    int team = min(min(v1.size(),v2.size()),v3.size());
    cout<<team<<endl;
    for(int i=0;i<team;i++)
    {
        cout<<v1[i]<<" "<<v2[i]<<" "<<v3[i]<<endl;
    }
}
