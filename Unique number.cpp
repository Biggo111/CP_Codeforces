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
        int l = n;
        int k = l%10;
        l = l/10;
        if(n<10)cout<<n<<endl;
        else if(n>45)cout<<-1<<endl;
        else
        {
            vector<int>v;
            int f = n;  ///20
            int sum=0,limit=9;
            while(f!=sum) ///20!=0, 20!=9, 20!=17
            {
                if((f-sum)>limit) ///20-0=20>9, 20-9=11>8, 20-17=3<7
                {
                    sum+=limit;   ///9 + 8 +
                    v.push_back(limit); ///9 8
                    limit--; ///7
                }
                else
                {
                    v.push_back(f-sum); ///20-17=3
                    sum = f; /// 20
                }
            }
            reverse(v.begin(),v.end());
            for(int i=0;i<v.size();i++)
            {
                cout<<v[i];
            }
            cout<<endl;
        }
    }
}
