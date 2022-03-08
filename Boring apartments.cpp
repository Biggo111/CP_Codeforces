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
        string x;
        cin>>x;
        int c=0;
        if(x.size()==1)c=1;
        else if(x.size()==2)c=3;
        else if(x.size()==3)c=6;
        else if(x.size()==4)c=10;
        int a = x[0] - '0';
        while(a!=0)
        {
            c+=10;
            a--;
        }
        cout<<c-10<<endl;
    }
}
