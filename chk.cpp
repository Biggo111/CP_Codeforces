#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define check freopen("in.txt", "r", stdin);
#define biggo ios_base::sync_with_stdio(false);cin.tie(0),cout.tie(0)
int main()
{
    int t,d,m;
    cin>>t>>d>>m;
    vector<ll> vec;
    vec.push_back(0);
    for(ll i=0, a; i<m; i++)
    {
        cin>>a;
        vec.push_back(a);
    }
    vec.push_back(d);

    bool ok = 0;
    for(int i= 1; i<m+2; i++)
    {
        ll dif = vec[i]-vec[i-1];
        // cout<<dif<<endl;
        if(dif>=t)
        {
            ok = 1;
            break;
        }
    }
    if(ok) cout<<"Y"<<endl;
    else cout<<"N"<<endl;

}

