#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define check freopen("in.txt", "r", stdin);
#define biggo ios_base::sync_with_stdio(false);cin.tie(0),cout.tie(0)
int main()
{
    double n;
    cin>>n;
    vector<double>v;
    while(n>0)
    {
        double k = 1/n;
        v.push_back(k);
        n--;
    }
    double sum=0;
    for(auto x:v)sum+=x;
    cout<<sum<<endl;
}
