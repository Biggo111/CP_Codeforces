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
        int a,b,c;
        cin>>a>>b>>c;
        int h = 2 * abs(a-b);
        if(h<a || h<b || h<c)cout<<-1<<endl;
        else
        {
            int k = abs(a-b); ///3
            int g = c+k;  ///7
            if(g>h)
            {
                cout<<c-k<<endl; ///1
            }
            else
            {
                cout<<c+k<<endl;
            }
        }
    }
}
