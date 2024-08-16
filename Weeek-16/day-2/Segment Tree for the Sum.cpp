/******** Name :- Md Firoz Islam ***********
University :- Northern University Bangladesh
********** Dhaka,Bangladesh ***************/
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define faster ios::sync_with_stdio(false),cin.tie(NULL);

class Firoz
{
public:
    Firoz(const vector<int>& data)
    {
        n = data.size();
        tree.resize(2 * n);
        build(data);
    }

    void update(int idx, int value)
    {
        idx += n;
        tree[idx] = value;

        while (idx > 1)
        {
            idx /= 2;
            tree[idx] = tree[2 * idx] + tree[2 * idx + 1];
        }
    }

    int query(int left, int right)
    {
        left += n;
        right += n;
        int sum = 0;

        while (left < right)
        {
            if (left % 2 == 1)
            {
                sum += tree[left];
                left++;
            }
            if (right % 2 == 1)
            {
                right--;
                sum += tree[right];
            }
            left /= 2;
            right /= 2;
        }
        return sum;
    }

private:
    int n;
    vector<int> tree;

    void build(const vector<int>& data)
    {
        for (int i = 0; i < n; i++)
        {
            tree[n + i] = data[i];
        }

        for (int i = n - 1; i > 0; i--)
        {
            tree[i] = tree[2 * i] + tree[2 * i + 1];
        }
    }
};

int_fast32_t main()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    Firoz segTree(a);

    for (int i = 0; i < m; i++)
    {
        int type;
        cin >> type;
        if (type == 1)
        {
            int idx, value;
            cin >> idx >> value;
            segTree.update(idx, value);
        }
        else if (type == 2)
        {
            int left, right;
            cin >> left >> right;
            cout << segTree.query(left, right) << endl;
        }
    }

    return 0;
}
