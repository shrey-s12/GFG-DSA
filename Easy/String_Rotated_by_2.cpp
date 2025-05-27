#include <bits/stdc++.h>
using namespace std;

string rotateClockwise(string s)
{
    int n = s.size();
    char last = s[n - 1];
    for (int j = n - 1; j > 0; j--)
    {
        s[j] = s[j - 1];
    }
    s[0] = last;

    return s;
}

string rotateAntiClockwise(string s)
{
    int n = s.size();
    char first = s[0];
    for (int j = 0; j < n - 1; j++)
    {
        s[j] = s[j + 1];
    }
    s[n - 1] = first;

    return s;
}

int main()
{
    string s1 = "amazon";
    string s2 = "azonam";

    string clockWise = s1, antiClockWise = s1;

    clockWise = rotateClockwise(clockWise);
    clockWise = rotateClockwise(clockWise);

    antiClockWise = rotateAntiClockwise(antiClockWise);
    antiClockWise = rotateAntiClockwise(antiClockWise);

    if (clockWise == s2 || antiClockWise == s2)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}