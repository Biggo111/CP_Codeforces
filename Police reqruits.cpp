#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define check freopen("in.txt", "r", stdin);
#define biggo ios_base::sync_with_stdio(false);cin.tie(0),cout.tie(0)
int main()
{
    ll n;
    cin>>n;
    vector<ll>v(n);
    int p=0;
    int c = 0;
    for(int i=0;i<n;i++)
    {
        int f;
        cin>>f;
        if(f>0)
        {
            p+=f;
        }
        else
        {
            if(p<1)
            {
                c++;
            }
            else
            {
                p--;
            }
        }
    }
    cout<<c<<endl;
}
