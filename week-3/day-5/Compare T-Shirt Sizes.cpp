#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        string a,b;
        cin>>a>>b;
        if(a[a.size()-1]=='M' || b[b.size()-1]=='M')
        {
            if(a[a.size()-1]=='L')
            {
                cout<<">\n";
            }
            else if(b[b.size()-1]=='L')
            {
                cout<<"<\n";
            }
            else if(a[a.size()-1]=='S')
            {
                cout<<"<\n";
            }
            else if(b[b.size()-1]=='S')
            {
                cout<<">\n";
            }
            else
            {
                cout<<"=\n";
            }
        }
        else
        {
            if(a[a.size()-1]=='S')
            {
                if(b[b.size()-1]=='S')
                {
                    if(a.size()==b.size())
                    {
                        cout<<"=\n";
                    }
                    else if(a.size()>b.size())
                    {
                        cout<<"<\n";
                    }
                    else
                    {
                        cout<<">\n";
                    }
                }
                else
                {
                    cout<<"<\n";
                }
            }
            else
            {
                if(b[b.size()-1]=='S')
                {
                    cout<<">\n";
                }
                else
                {
                    if(a.size()==b.size())
                    {
                        cout<<"=\n";
                    }
                    else if(a.size()>b.size())
                    {
                        cout<<">\n";
                    }
                    else
                    {
                        cout<<"<\n";
                    }
                }
            }
        }
    }
    return 0;
}

