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
        cin >> n;
        int s[n], f[n], d[n];
        In_range(i, 0, n) cin >> s[i];
        In_range(i, 0, n) cin >> f[i];

        d[0] = f[0] - s[0];
        In_range(i, 1, n) d[i] = f[i] - max(s[i], f[i - 1]);

        for (int x : d)
            cout << x << " ";
        cout << endl;
    }

    return 0;
}