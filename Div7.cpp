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
        int n;
        cin>>n;
        if(n%7==0)
        {
            cout<<n<<endl;
        }
        else
        {
            n = n - (n%10);
            while(n%7!=0)
            {
                n++;
            }
            cout<<n<<endl;
//            for(int i=n;i<=n+9;i++)
//            {
//                if(i%7==0 && i!=0)
//                {
//                    cout<<i<<endl;
//                    break;
//                }
//            }
        }
    }
}
