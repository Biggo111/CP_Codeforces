#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define check freopen("in.txt", "r", stdin);
#define biggo ios_base::sync_with_stdio(false);cin.tie(0),cout.tie(0)
int main()
{
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    int k = ((n+m-1)/m)*b;
    int j = (n*a);
    int l = (n/m)*b+(n%m)*a;
    cout<<min({k,j,l})<<endl;
    return 0;
}
