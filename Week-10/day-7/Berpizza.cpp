#include <bits/stdc++.h>
using namespace std;

struct Customer {
    int id;
    int money;
    Customer(int id, int money) : id(id), money(money) {}
    bool operator<(const Customer& other) const {
        if (money == other.money) {
            return id > other.id;
        }
        return money < other.money;
    }
};

int main() {
    int t;
    cin >> t;

    queue<int> q;
    priority_queue<Customer> m_q;
    set<int> s;
    vector<int> v(t + 1);

    int c = 1;

    for (int i = 0; i < t; i++) {
        int x;
        cin >> x;

        if (x == 1) {
            int m;
            cin >> m;
            v[c] = m;
            q.push(c);
            m_q.push(Customer(c, m));
            c++;
        } else if (x == 2) {
            while (s.find(q.front()) != s.end()) {
                q.pop();
            }
            int servedId = q.front();
            q.pop();
            cout << servedId << " ";
            s.insert(servedId);
        } else if (x == 3) {
            while (s.find(m_q.top().id) != s.end()) {
                m_q.pop();
            }
            int servedId = m_q.top().id;
            m_q.pop();
            cout << servedId << " ";
            s.insert(servedId);
        }
    }

    return 0;
}
