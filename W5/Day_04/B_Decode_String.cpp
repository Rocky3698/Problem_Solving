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
        int n, x;
        string s, ans = "";
        cin >> n >> s;
        for (int i = n - 1; i >= 0; i--)
        {
            if (s[i] == '0')
            {
                x = ((s[i - 2] - '0') * 10) + (s[i - 1] - '0');
                i -= 2;
            }
            else
                x = (s[i] - '0');
            ans += (char)('`' + x);
        }
        reverse(ans.begin(), ans.end());
        cout << ans << endl;
    }

    return 0;
}