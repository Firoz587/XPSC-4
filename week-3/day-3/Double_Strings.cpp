#include<bits/stdc++.h>
using namespace std;

bool fun(const string& s, const unordered_set<string>& d) {
    int n = s.size();
    for(int i = 1; i < n; i++) {
        string s1 = s.substr(0, i);
        string s2 = s.substr(i);
        if(d.find(s1) != d.end() && d.find(s2) != d.end())
            return true;
    }
    return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        vector<string> s(n);
        unordered_set<string> d;

        for(int i = 0; i < n; i++) {
            cin >> s[i];
            d.insert(s[i]);
        }

        vector<int> v;
        for(int i = 0; i < n; i++) {
            v.push_back(fun(s[i], d));
        }

        for(auto x : v) {
            cout << x;
        }
        cout << endl;
    }
    return 0;
}
