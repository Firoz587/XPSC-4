/******** Name :- Md Firoz Islam ***********
University :- Northern University Bangladesh
********** Dhaka,Bangladesh ***************/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define faster ios::sync_with_stdio(false),cin.tie(NULL);

void Firoz()
{
    int n;
    cin >> n;
    vector<int> v(n);
    vector<int> odd, even;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] % 2 == 0)
        {
            even.push_back(i + 1);
        }
        else
        {
            odd.push_back(i + 1);
        }
    }

    if (odd.size() >= 1 && even.size() >= 2)
    {
        yes
        cout << odd[0] << " " << even[0] << " " << even[1] << endl;
    }
    else if (odd.size() >= 3)
    {
        yes
        cout << odd[0] << " " << odd[1] << " " << odd[2] << endl;
    }
    else
    {
        no
    }
}

int main()
{
    faster;
    int t;
    cin >> t;
    while (t--)
    {
        Firoz();
    }
    return 0;
}