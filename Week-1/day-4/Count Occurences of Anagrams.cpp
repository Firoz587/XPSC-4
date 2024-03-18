class Solution{
public:
	int search(string pat, string txt) {
	    // code here
	int n = pat.size();
    int m = txt.size();

    vector<int> patFreq(26, 0);
    vector<int> txtFreq(26, 0);
    for (char c : pat)
        patFreq[c - 'a']++;

    int cnt = 0;
    int l = 0, r = 0;
    while (r < m)
    {
        txtFreq[txt[r] - 'a']++;
        if (r - l + 1 > n)
        {
            txtFreq[txt[l] - 'a']--;
            l++;
        }

        if (r - l + 1 == n)
        {
            bool flag = true;

            for (int i = 0; i < 26; i++)
            {
                if (patFreq[i] != txtFreq[i])
                {
                    flag = false;
                    break;
                }
            }

            if (flag)
                cnt++;
        }

        r++;
    }

    return cnt;

	}

};
