#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define check freopen("in.txt", "r", stdin);
#define biggo ios_base::sync_with_stdio(false);cin.tie(0),cout.tie(0)
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    stack<int>st;
    st.push(v[0]);
    for(int i=1;i<n;i++)
    {
        int k = v[i]+st.top();
        st.push(k);
    }
    vector<int>v3;
    while (!st.empty()) {
        v3.push_back(st.top());
        st.pop();
    }
    reverse(v3.begin(),v3.end());
    //for(auto x:v3)cout<<x<<endl;
    int m;
    cin>>m;
    while(m--)
    {
        int f;
        cin>>f;
        cout<<(lower_bound(v3.begin(), v3.end(), f)- v3.begin())+1<<endl;
//        for(int i=0;i<v3.size();i++)
//        {
//            if(f<=v3[i])
//            {
//                cout<<i+1<<endl;
//                break;
//            }
//        }
    }
}
