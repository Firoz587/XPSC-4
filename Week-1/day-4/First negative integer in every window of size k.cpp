vector<long long> printFirstNegativeInteger(long long int A[],
                                             long long int N, long long int K) {
    vector<long long>v;
    queue<long long> neg_val;

    int l = 0, r = 0;
    while (r < N) {
        if (A[r] < 0)
            neg_val.push(r);
        if (r - l + 1 > K) {
            if (!neg_val.empty() && neg_val.front() == l)
                neg_val.pop();
            l++;
        }
        if (r - l + 1 == K) {
            if (!neg_val.empty())
                v.push_back(A[neg_val.front()]);
            else
                v.push_back(0);
        }

        r++;
    }

    return v;

 }
