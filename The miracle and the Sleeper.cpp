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
        int l,r;
        cin>>l>>r;
        //cout<<r%l<<endl;

        int k = r/2 + 1;
        if(k>=l)
        {
            int j = r%k;
            cout<<j<<endl;
        }
        else cout<<r%l<<endl;
    }
}
