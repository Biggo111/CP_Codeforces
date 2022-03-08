#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k=0,j=0;
    string st,st2="hello";
    cin>>st;
    //sort(st.begin(),st.end());
    for(int i=0;i<st.size();i++)
    {
        if(st[i]==st2[j])
        {
            k++;
            j++;
        }
    }
    if(k==5)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
