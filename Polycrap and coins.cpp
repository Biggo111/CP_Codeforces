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
        int n;
        cin>>n;
        int k = n/3;
        int l = n%3;
        if(l==0)cout<<k<<" "<<k<<endl;
        else if(l==1)cout<<k+1<<" "<<k<<endl;
        else if(l==2)cout<<k<<" "<<k+1<<endl;
    }
}
