#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define For(i, s, n) for (int i = s; i < n; i++)
typedef pair<int, int> pii;
const int INF = 1e9 + 7;
const int N = 1e5 + 5;
const int M = 1e3 + 5;
int i, j;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        s[0] = tolower(s[0]);

        if (s[0] == 'm')
        {
            string x;
            x += s[0];
            For(i, 1, n)
            {
                s[i] = tolower(s[i]);
                if (s[i] != s[i - 1])
                    x += s[i];
            }
            (x == "meow") ? cout << "YES" << endl : cout << "NO" << endl;
        }
        else
            cout << "NO\n";
    }

    return 0;
}
