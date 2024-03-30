#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n][n];
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n-1; j++)
            {
                cin>>arr[i][j];
            }
        }
        if(arr[0][0]!=arr[1][0] && arr[0][0]!=arr[2][0])
        {
            cout<<arr[1][0]<<" ";
            for(int i=0; i<n-1; i++)
            {
                cout<<arr[0][i]<<" ";
            }
            cout<<endl;
        }
        else
        {
            for(int i=0; i<n; i++)
            {
                if(arr[0][0]!=arr[i][0])
                {
                    cout<<arr[0][0]<<" ";
                    for(int j=0; j<n-1; j++)
                    {
                        cout<<arr[i][j]<<" ";
                    }
                    cout<<endl;
                    break;
                }
            }
        }
    }
    return 0;
}
