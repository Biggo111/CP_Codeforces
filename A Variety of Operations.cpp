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
        int c,d;
        cin>>c>>d;
        if(c==0 && d==0)cout<<0<<endl;
        else if(c==d)cout<<1<<endl;
        else if((c+d)%2!=0)cout<<-1<<endl;
        else
        {
            cout<<2<<endl;
        }
    }
}
