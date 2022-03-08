#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define check freopen("in.txt", "r", stdin);
#define biggo ios_base::sync_with_stdio(false);cin.tie(0),cout.tie(0)
int main()
{
     int t;
    cin >> t;
    while(t--){
        set<int>st;
        vector<int>vec;
        int n;
        cin >> n;
        int count = 0;
        for(int i=0; i<n; i++){
            int a;
            cin >> a;
            vec.push_back(a);
            if(st.find(vec[i]) != st.end()){
                if(st.find(-1 * vec[i]) == st.end()){
                    count++;
                    st.insert(-1 * vec[i]);
                }
            }else{
                count++;
                st.insert(vec[i]);
            }
        }
        cout << st.size() <<endl;
    }
}
//    int t;
//    cin >> t;
//    while(t--){
//        map<int,int>mp;
//        int n;
//        cin >> n;
//        for(int i=0; i<n; i++){
//            int a;
//            cin >> a;
//            mp[a]++;
//        }
//        int count = 0;
//        for(auto it : mp){
//            if(it.second > 1 && it.first != 0){
//                count+=2;
//            }else{
//                count++;
//            }
//        }
//        cout << count <<endl;
//    }
//}
//    ll t;
//    cin>>t;
//    while(t--)
//    {
//        ll n;
//        cin>>n;
//        vector<ll>v(n);
//        map<ll,ll>mp;
//        int cnt=0;
//        for(int i=0;i<n;i++)
//        {
//            cin>>v[i];
//            mp[v[i]]++;
//        }
//        int mx=0;
//        int val;
//        for(auto x:mp)
//        {
//            if(x.second>mx)
//            {
//                mx = x.second;
//                val = x.first;
//            }
//        }
//        if(mx==1)cout<<1<<endl;
//        else if((n-mx)==mx)cout<<n<<endl;
//        else
//        {
//            ll k = n - val;
//            cout<<k<<endl;
//        }
//    }

