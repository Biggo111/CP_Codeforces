#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define check freopen("in.txt", "r", stdin);
#define biggo ios_base::sync_with_stdio(false);cin.tie(0),cout.tie(0)
int main()
{
    biggo;
    int n,sum=0,c=0;
    cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
        sum+=v[i];
    }
    sort(v.rbegin(),v.rend()); ///3 3
    sum/=2;  /// 6/2 = 3
    int s=0;
    for(int i=0;i<=n;i++)
    {
        if(s>sum)  /// 6>3
        {
            cout<<c<<endl;
            break;
        }
        s += v[i];
        c++;
    }
    //cout<<c<<endl;
}
