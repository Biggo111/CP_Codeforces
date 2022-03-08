#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define check freopen("in.txt", "r", stdin);
#define biggo ios_base::sync_with_stdio(false);cin.tie(0),cout.tie(0)
int main()
{
    int n;
    cin>>n;
    vector<int>speed,ram,hdd,cost;
    for(int i=0;i<n;i++)
    {
        int a,b,c,d;
        cin>>a;
        speed.push_back(a);
        cin>>b;
        ram.push_back(b);
        cin>>c;
        hdd.push_back(c);
        cin>>d;
        cost.push_back(d);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(speed[i]<speed[j] && ram[i]<ram[j] && hdd[i]<hdd[j])
            {

            }
        }
    }
}
