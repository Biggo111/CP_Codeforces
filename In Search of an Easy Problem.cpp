#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    sort(v.rbegin(),v.rend());
    if(v[0]==1)cout<<"HARD"<<endl;
    else cout<<"EASY"<<endl;
}
