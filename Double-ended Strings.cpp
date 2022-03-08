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
        string s,s2;
        cin>>s>>s2;
        int m = s.size();
        int n = s2.size();
        int LCS[m+1][n+1];
        int maxi = 0;
        for(int i=0;i<m+1;i++)
        {
            for(int j=0;j<n+1;j++)
            {
                if(i==0 || j==0)LCS[i][j]=0;
                else if(s[i-1]==s2[j-1])
                {
                    LCS[i][j] = 1 + LCS[i-1][j-1];
                    maxi = max(maxi,LCS[i][j]);
                }
                else
                {
                    LCS[i][j]=0;
                }
            }
        }
        //cout<<maxi<<endl;
        int ans = (m - maxi) + (n - maxi);
        cout<<ans<<endl;
    }
}
