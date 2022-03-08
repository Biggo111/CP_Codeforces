#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define check freopen("in.txt", "r", stdin);
#define biggo ios_base::sync_with_stdio(false);cin.tie(0),cout.tie(0)
int main()
{
    int k,l,m,n,d,c=0;
    cin>>k>>l>>m>>n>>d;
    for(int i=1;i<=d;i++)
    {
        if(i%k==0 || i%l==0 || i%m==0 || i%n==0)c++;
    }
    cout<<c<<endl;
}
