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
        string s,s2;
        cin>>s;
        s2 = s;
        int k = 0;
        sort(s.begin(),s.end());
        for(int i=0,j=0;i<s.size();i++,j++)
        {
            if(s[i]!=s2[j])k++;
        }
        cout<<k<<endl;
    }
}
