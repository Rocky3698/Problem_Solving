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
        cin >> n >> c;
        string s;
        cin >> s;
        s += s;
        int j = 0;
        bool flag = false;
        int ans = 0, cnt = 0;
        while (j < s.size())
        {
            if (s[j] == 'g')
            {
                ans = max(ans, cnt);
                cnt = 0;
                flag = false;
            }
            if (s[j] == c && s[j] != 'g')
                flag = true;
            if (flag)
                cnt++;
            j++;
        }
        cout << ans << endl;
    }

    return 0;
}