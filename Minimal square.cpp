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
        int a,b;
        cin>>a>>b;
        int c = a*2;
        int d = b*2;
        if(c>d)
        {
            if(a>d)
            {
                cout<<a*a<<endl;
            }
            else
            {
                cout<<d*d<<endl;
            }
        }
        else
        {
            if(b>c)
            {
                cout<<b*b<<endl;
            }
            else
            {
                cout<<c*c<<endl;
            }
        }
    }
}
