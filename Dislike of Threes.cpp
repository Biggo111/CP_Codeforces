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
        int k;  ///8
        cin>>k;
        int arr[10001];
        int i=0,f=1,ans=0;
        while(i<k)
        {
            if(f%3!=0 && f%10!=3)
            {
                ans = f;
                i++;
            }
            f++;
        }
        cout<<ans<<endl;
    }
}
