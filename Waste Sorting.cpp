#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define check freopen("in.txt", "r", stdin);
#define biggo ios_base::sync_with_stdio(false);cin.tie(0),cout.tie(0)
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        int c1,c2,c3,a1,a2,a3,a4,a5;
        cin>>c1>>c2>>c3>>a1>>a2>>a3>>a4>>a5;
        int f = min(a4,c1);
        int m = max(a4,c1);
        int g = min(a5,c2);
        int n = max(a5,c2);
        if(c1<a1 || c2<a2 || c3<a3)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            if(f<=c1 && m<=c3 && g<=c2 && n<=c3)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }
}
