/******** Name :- Md Firoz Islam ***********
University :- Northern University Bangladesh
********** Dhaka,Bangladesh ***************/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    if(n==1)
    {
        cout<<'a'<<endl;
    }
    else
    {
        char prev = 'a';
    cout << prev;

    char current = 'a';
    if (prev == 'a')
    {
        current = 'b';
    }
    else if (prev == 'b')
    {
        current = 'a';
    }
    cout << current;

    for (int i = 2; i < n; ++i)
    {
        char next = 'a';
        if (current == 'a' && prev == 'a')
        {
            next = 'b';
        }
        else if (current == 'b' && prev == 'a')
        {
            next = 'b';
        }
        else if (current == 'a' && prev == 'b')
        {
            next = 'a';
        }
        else if (current == 'b' && prev == 'b')
        {
            next = 'a';
        }

        cout << next;

        prev = current;
        current = next;
    }

    }
    cout << endl;
    return 0;
}
