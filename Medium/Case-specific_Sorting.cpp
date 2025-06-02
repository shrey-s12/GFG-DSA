#include <bits/stdc++.h>
using namespace std;

// string lowerSort(vector<int> lower)
// {
//     string lowerSortedS;
//     for (int i = 0; i < 26; i++)
//     {
//         char c = 'a' + i;
//         while (lower[i])
//         {
//             lowerSortedS += c;
//             lower[i]--;
//         }
//     }
//     return lowerSortedS;
// }

// string upperSort(vector<int> upper)
// {
//     string upperSortedS;
//     for (int i = 0; i < 26; i++)
//     {
//         char c = 'A' + i;
//         while (upper[i])
//         {
//             upperSortedS += c;
//             upper[i]--;
//         }
//     }
//     return upperSortedS;
// }

string sortFreqArray(vector<int> &feq, char baseChar)
{
    string sortedStr;
    for (int i = 0; i < 26; i++)
    {
        char c = baseChar + i;
        while (feq[i])
        {
            sortedStr += c;
            feq[i]--;
        }
    }

    return sortedStr;
}

string caseSort(string str, int n)
{
    vector<int> lower(26, 0);
    vector<int> upper(26, 0);

    for (int i = 0; i < n; i++)
    {
        if (str[i] >= 'a')
            lower[str[i] - 'a']++;
        else
            upper[str[i] - 'A']++;
    }

    string lowerSortedS = sortFreqArray(lower, 'a');
    string upperSortedS = sortFreqArray(upper, 'A');

    int index1 = 0, index2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (str[i] >= 'a')
        {
            str[i] = lowerSortedS[index1];
            index1++;
        }
        else
        {
            str[i] = upperSortedS[index2];
            index2++;
        }
    }

    return str;
}

int main()
{
    // string str = "defRTSersUXI"; // => deeIRSfrsTUX
    // int n = 12;

    string str = "srbDKi"; // => birDKs
    int n = 6;

    string ans = caseSort(str, n);
    cout << ans;
    return 0;
}