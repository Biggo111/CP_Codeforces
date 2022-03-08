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
        int n,k;
        cin>>n>>k;
        int f = 2*k;
        int z= k+1;
        string s,s2="",s3="";
        cin>>s;
        if(f>=n)cout<<"NO"<<endl;
        else if(k==0)cout<<"YES"<<endl;
        else
        {
            bool flag=false;
            for(int i=0;i<k;i++)
            {
                if(s[i]==s[n-1-i])flag=true;
                else
                {
                    flag=false;
                    cout<<"NO"<<endl;
                    break;
                }
            }
            if(flag==true)
            {
                cout<<"YES"<<endl;
            }
        }
    }
}
