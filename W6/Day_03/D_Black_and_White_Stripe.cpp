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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int w = 0;
        In_range(i, 0, k)
        {
            if (s[i] == 'W')
                w++;
        }
        int ans = w;
        for (int i = k, j = 0; i < n; i++, j++)
        {
            if (s[i] == 'W')
                w++;
            if (s[j] == 'W')
                w--;
            ans = min(ans, w);
        }
        cout << ans << endl;
    }
    return 0;
}