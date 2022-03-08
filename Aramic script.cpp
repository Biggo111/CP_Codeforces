#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define check freopen("in.txt", "r", stdin);
#define biggo ios_base::sync_with_stdio(false);cin.tie(0),cout.tie(0)
int main()
{
     int n;
     cin>>n;
     vector<string>v(n);
     set<char>st2;
     set<string>st;
     string s;
     for(int i=0;i<n;i++)
     {
         cin>>v[i];
         sort(v[i].begin(),v[i].end());
         //st.insert(v[i]);
         for(int j=0;j<v[i].size();j++)
         {
             st2.insert(v[i][j]);
         }
         for(auto x:st2)s+=x;
         st2.clear();
         st.insert(s);
         s = "";
     }
     int c=0;
     //for(auto x:st)cout<<x<<" ";
     for(auto x:st)c++;
     cout<<c<<endl;
}
