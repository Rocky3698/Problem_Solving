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
        char c;
        string s;
        cin >> n >> c >> s;
        int cnt = 0, pos = 0;
        In_range(i, 0, n)
        {
            if (s[i] == c)
            {
                cnt++;
                pos = i + 1;
            }
        }
        if (cnt == n)
            cout << 0 << endl;
        else if (pos > (n / 2))
            cout << "1\n"
                 << pos << endl;
        else
            cout << "2\n"
                 << n << " " << n - 1 << endl;
    }

    return 0;
}