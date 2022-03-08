#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[3],arr1[3],arr2[3];
    for(int i=0; i<3; i++)
    {
        cin>>arr[i];
    }
    for(int i=0; i<3; i++)
    {
        cin>>arr1[i];
    }
    for(int i=0; i<3; i++)
    {
        cin>>arr2[i];
    }
    vector<int>v;
    for(int i=0;i<3;i++)
    {
        v.push_back(arr[i]);
        v.push_back(arr1[i]);
        v.push_back(arr2[i]);
    }
    //for(auto x:v)cout<<x<<" ";
    int sum = 0;
    for(int i=0;i<9;i++)
    {
        sum = sum + v[i];
    }
    int s = sum / 2;
    arr[0] = s - (arr[1]+arr[2]);
    arr1[1] = s - (arr1[0]+arr1[2]);
    arr2[2] = s - (arr2[0]+arr2[1]);
    cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<endl;
    cout<<arr1[0]<<" "<<arr1[1]<<" "<<arr1[2]<<endl;
    cout<<arr2[0]<<" "<<arr2[1]<<" "<<arr2[2]<<endl;
//    for(int i=0;i<3;i++)
//    {
//        cout<<arr[i]<<" ";
//    }
//    cout<<endl;
//    for(int i=0;i<3;i++)
//    {
//        cout<<arr1[i]<<" ";
//    }
//    cout<<endl;
//    for(int i=0;i<3;i++)
//    {
//        cout<<arr2[i]<<" ";
//    }
//    cout<<endl;
}
