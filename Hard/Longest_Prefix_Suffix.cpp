#include <bits/stdc++.h>
using namespace std;

int longestPrefixSuffix(string s)
{
    int n = s.size();
    int prefix = 0, suffix = 1;
    vector<int> lps(n, 0);

    while (suffix < n)
    {
        if (s[prefix] == s[suffix])
        {
            lps[suffix] = prefix + 1;
            prefix++, suffix++;
        }
        else
        {
            if (prefix == 0)
                suffix++;
            else
                prefix = lps[prefix - 1];
        }
    }

    return lps[n - 1];
}

int main()
{
    // string s = "aabcdaabc"; // => 4
    // string s = "abab"; // => 2
    // string s = "aaaa"; // => 3
    string s = "ABCABDABCABCABD"; // => 6

    int ans = longestPrefixSuffix(s);
    cout << ans;
    return 0;
}