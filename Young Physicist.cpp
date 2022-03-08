#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define check freopen("in.txt", "r", stdin);
#define biggo ios_base::sync_with_stdio(false);cin.tie(0),cout.tie(0)
int main()
{
    int n,a,b,c;
    cin>>n;
    vector<int>x,y,z;
    while(n--)
    {
        cin>>a>>b>>c;
        x.push_back(a);
        y.push_back(b);
        z.push_back(c);
    }
    int s=0,s2=0,s3=0;
    for(auto k:x)s+=k;
    for(auto k:y)s2+=k;
    for(auto k:z)s3+=k;
    if(s==0 && s2==0 && s3==0)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
