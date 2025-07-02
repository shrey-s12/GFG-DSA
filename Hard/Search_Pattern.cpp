#include <bits/stdc++.h>
using namespace std;

void lpsFind(vector<int> &lps, string s)
{
    int n = s.size();
    int pre = 0, suf = 1;
    while (suf < n)
    {
        if (s[pre] == s[suf])
        {
            lps[suf] = pre + 1;
            pre++, suf++;
        }
        else
        {
            if (pre == 0)
                suf++;
            else
                pre = lps[pre - 1];
        }
    }
}

vector<int> search(string &pat, string &txt)
{
    int n = pat.size();
    int m = txt.size();
    vector<int> lps(n, 0);
    lpsFind(lps, pat);

    int i = 0, j = 0;
    vector<int> ans;
    while (i < m)
    {
        if (txt[i] == pat[j])
        {
            i++, j++;
            if (j == n)
            {
                ans.push_back(i - j);
                j = lps[j - 1];
            }
        }
        else
        {
            if (j == 0)
                i++;
            else
                j = lps[j - 1];
        }
    }

    return ans;
}

int main()
{
    string txt = "aabaacaadaabaaba", pat = "aaba";

    vector<int> ans = search(pat, txt);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}