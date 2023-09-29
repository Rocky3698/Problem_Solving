#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef pair<int, int> pii;
const int INF = 1e9 + 7;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    cin >> s;
    int u = 0, l = 0;
    for (char c : s)
    {
        if (c >= 'a' && c <= 'z')
            l++;
        else
            u++;
    }
    if (u > l)
    {
        for (char c : s)
        {
            if (c >= 'a' && c <= 'z')
                c -= 32;
            cout << c;
        }
        cout << endl;
    }
    else
    {
        for (char c : s)
        {
            if (c >= 'A' && c <= 'Z')
                c += 32;
            cout << c;
        }
        cout << endl;
    }

    return 0;
}