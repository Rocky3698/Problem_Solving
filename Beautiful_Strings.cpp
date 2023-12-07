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
        ll n;
        cin >> n;
        string s;
        cin >> s;
        ll frequency[26] = {0};
        for (auto c : s)
            frequency[(c - 'a')]++;

        ll res = 1;
        for (auto x : frequency)
        {
            res *= (x + 1);
            res %= INF;
        }
        cout << res - 1 << endl;
    }

    return 0;
}
