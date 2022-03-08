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
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int m=0;
        vector<int>v;
        vector<int>v2;
        for(int i=0;i<n;i++)
        {
            if(i%2==0 && arr[i]%2!=0)
            {
                v.push_back(arr[i]);
            }
            else if(i%2!=0 && arr[i]%2==0)
            {
                v2.push_back(arr[i]);
            }
        }
        int s1 = v.size();
        int s2 = v2.size();
        if(s1!=s2)cout<<-1<<endl;
        else cout<<s1<<endl;
    }
}
