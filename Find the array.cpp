#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define check freopen("in.txt", "r", stdin);
#define biggo ios_base::sync_with_stdio(false);cin.tie(0),cout.tie(0)
int main()
{
    biggo;
    int t;
    cin>>t;
    while(t--)
    {
        int s;
        cin>>s;
        int k = ceil(sqrt(s));
        cout<<k<<endl;
    }
}
