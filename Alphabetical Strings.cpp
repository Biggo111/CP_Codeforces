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
        string s;
        int k;
        cin>>s;
        for(int i=0; i<s.size(); i++)
        {
            k = s.find('a');
        }
        if(k==-1)cout<<"NO"<<endl;
        else
        {
            int c=0;
            int i=k-1;
            int j=k+1;
            char ch='b';
            while(i>=0 || j<s.size())
            {
                if(s[i]==ch)
                {
                    ch++;
                    i--;
                }
                else if(s[j]==ch)
                {
                    ch++;
                    j++;
                }
                else
                {
                    c=1;
                    break;
                }
            }
            if(c==1)cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
    }
}
