#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define check freopen("in.txt", "r", stdin);
#define biggo ios_base::sync_with_stdio(false);cin.tie(0),cout.tie(0)
int main()
{
    biggo;
    int n,p,q;
    cin>>n;
    set<int>st;
    cin>>p;
    for(int i=0; i<p; i++)
    {
        int a;
        cin>>a;
        st.insert(a);
    }
    cin>>q;
    for(int i=0; i<q; i++)
    {
        int a;
        cin>>a;
        st.insert(a);
    }
    if(st.size()==n)cout<<"I become the guy."<<endl;
    else cout<<"Oh, my keyboard!"<<endl;
}
