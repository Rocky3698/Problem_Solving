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
        string s;
        int n, k, ans = 0;
        cin >> n >> k >> s;
        vector<int> U(26, 0);
        vector<int> L(26, 0);
        In_range(i, 0, n)(s[i] <= 'Z') ? U[s[i] - 'A']++ : L[s[i] - 'a']++;

        In_range(i, 0, 26)
        {
            int d = abs(U[i] - L[i]);
            if (k && d)
            {
                ans += min(k, d / 2);
                k -= min(k, d / 2);
            }
            if (U[i] && L[i])
                ans += min(U[i], L[i]);
        }
        cout << ans << endl;
    }

    return 0;
}