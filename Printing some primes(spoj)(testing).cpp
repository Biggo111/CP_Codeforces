#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define check freopen("in.txt", "r", stdin);
#define biggo ios_base::sync_with_stdio(false);cin.tie(0),cout.tie(0)

const int mx = 1e8;
vector<char>status(mx+1,true);
vector<int>ans;

int main()
{
    status[0]=status[1] = false;
    for(int i=2;i*i<=mx;i++)
    {
        if(status[i])
        {
            for(int j=i*i;j<=mx;j+=i)
            {
                status[j]=false;
            }
        }
    }
    for(int i=2;i<=mx;i++)if(status[i])ans.push_back(i);
    for(int i=1;i<ans.size();i+=100)cout<<ans[i-1]<<endl;
}

