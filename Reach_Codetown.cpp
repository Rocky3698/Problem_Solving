#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define In_range(i, s, n) for (int i = s; i < n; i++)
typedef pair<int, int> pii;
const int INF = 1e9 + 7;
const int N = 1e5 + 5;
const int M = 1e3 + 5;
int i, j;
bool isValid(char a, char b, char c)
{
    string vow = "AEIOU";
    bool f1 = false, f2 = false, f3 = false;
    for (char x : vow)
    {
        if (a == x)
            f1 = true;
        if (b == x)
            f2 = true;
        if (c == x)
            f3 = true;
    }
    return f1 && f2 && f3;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int v = 0;
        for (char x : s)
            if (x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'u')
                v++;

        if (v == 3)
        {
            if (isValid(s[1], s[3], s[5]))
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else
            cout << "NO" << endl;
    }

    return 0;
}