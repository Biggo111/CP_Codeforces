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
        string s;
        cin>>s;
        int sum=0;
        for(int i=0; i<n; i++)
        {
            if(s[i]!='0')
            {
                sum+=s[i]-'0';
                if(i!=n-1)
                {
                    sum++;
                }
            }
        }
        cout<<sum<<endl;
    }
}
