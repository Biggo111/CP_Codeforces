#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define check freopen("in.txt", "r", stdin);
#define biggo ios_base::sync_with_stdio(false);cin.tie(0),cout.tie(0)
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        string s,s2;
        cin>>s>>s2;
        ll ff = s.size();
        sort(s.begin(),s.end());  //abccc
        int cnt=0,cnt2=0,cnt3=0,c=0,c2=0,c3=0;
        int flag = 0;
        set<char>st;
        for(auto x:s)
        {
            st.insert(x);
        }
        int flag2=0;
        set<char>::iterator it = st.begin();
        int k=0;
        while(it!=st.end())
        {
            if((*it)!=s2[k])
            {
                flag2=1;
                break;
            }
            it++;
            k++;
            if(k==2)break;
        }
        //cout<<endl;
        if(flag2==1)
        {
            cout<<s<<endl;
        }
        else
        {
            for(int i=0; i<s.size(); i++)
            {
                if(s2[0]==s[i])c++;      //c=1
                else if(s2[1]==s[i])c2++; //c2=3
                else if(s2[2]==s[i])c3++; //c3=1
            }
            for(int i=0; i<s.size(); i++)
            {
                if(s2[0]==s[i])cnt++;
                else if(s2[1]==s[i])cnt2++;
                else if(s2[2]==s[i])cnt3++;

                if(cnt>=1 && cnt2>=1 && cnt3>=1)
                {
                    flag = 1;
                    break;
                }
            }

            if((c==0 || c2==0 || c3==0))
            {
                cout<<s<<endl;
            }
            else
            {
                if(flag)
                {
                    for(int i=0; i<s.size(); i++)
                    {
                        if(s2[2]==s[i])
                        {
                            swap(s[i],s[i-cnt2]);
                        }
                    }
                    cout<<s<<endl;
                }
            }
        }
    }
}
