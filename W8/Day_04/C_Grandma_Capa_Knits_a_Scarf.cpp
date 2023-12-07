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
        string s;
        cin >> s;
        int ans = n + 1;
        for (char c = 'a'; c <= 'z'; c++)
        {
            int l = 0, r = n - 1, cnt = 0;
            while (l < r)
            {
                if (s[l] == s[r])
                {
                    l++;
                    r--;
                }
                else if (s[l] == c)
                {
                    l++;
                    cnt++;
                }
                else if (s[r] == c)
                {
                    r--;
                    cnt++;
                }
                else
                {
                    cnt = n + 1;
                    break;
                }
            }
            ans = min(ans, cnt);
        }
        cout << (ans > n ? -1 : ans) << endl;
    }

    return 0;
}