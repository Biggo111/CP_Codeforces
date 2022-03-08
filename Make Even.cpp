#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define check freopen("in.txt", "r", stdin);
#define biggo ios_base::sync_with_stdio(false);cin.tie(0),cout.tie(0)

void solve()
{
    ll n;
    cin>>n;
    string s = to_string(n);
    ll length = s.size();
    string s2 = s;
    sort(s2.begin(),s2.end());
    if(s[length-1] % 2 == 0)
    {
        cout<<0<<endl;
    }
    else if(s[0]%2==0)
    {
        cout<<1<<endl;
    }
    else if(s2[0]==s2[length-1])
    {
        cout<<-1<<endl;
    }
    else
    {
        int cnt = 0;
        int k = 0;
        for(int i=0;i<length;i++)
        {
            if(s[i]%2==0)
            {
                k = 1;
                break;
            }
        }
        if(k==0)
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<2<<endl;
//        for(int i=0;i<length;i++)
//        {
//            if(s[0]%2==0)
//            {
//                cnt++;
//                break;
//            }
//            swap(s[i],s[i+1]);
//            cnt++;
//        }
//         cout<<cnt<<endl;
        }
    }
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}
