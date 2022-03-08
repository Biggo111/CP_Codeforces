#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define check freopen("in.txt", "r", stdin);
#define biggo ios_base::sync_with_stdio(false);cin.tie(0),cout.tie(0)
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    int sum = 0;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        sum+=v[i];
    }
    int c=0;
    for(int i=0;i<n;i++)
    {
        if((sum-v[i])%2==0)
        {
            c++;
        }
    }
    cout<<c<<endl;
}
