#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ob,cap;
    cin>>ob>>cap;
    int pro[ob],wee[ob];
    int arr[ob][cap];
    for(int i=1;i<=ob;i++)
    {
        cin>>pro[i];
    }
    for(int i=1;i<=ob;i++)
    {
        cin>>wee[i];
    }
    for(int i=0, j=0; i<ob, j<cap; i++, j++)cout << pro[i] << " " << wee[j] << endl;
//    for(int i=0; i<=ob; i++){
//        for(int j=0; j<=cap; j++){
//            arr[i][j] = -1;
//        }
//    }

    for(int i=0;i<=ob;i++)
    {
        for(int j=0;j<=cap;j++)
        {
            if(i==0 || j==0)
            {
                arr[i][j] = 0;
            }
            else if((wee[i]<=j) && (i-1 >= 0))//1 2
            {
                arr[i][j] = max(arr[i-1][j],(arr[i-1][j-wee[i]] + pro[i]));
                cout << arr[i-1][j] << " " << pro[i] << " " <<  arr[i-1][j-wee[i]] << endl;
            }
            else
            {
                arr[i][j] = arr[i-1][j];
            }
        }

    }
     for(int i=0; i<=ob; i++){
        for(int j=0; j<=cap; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
//    cout<<arr[ob][cap];
}

