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
        cin >> s;
        int n = s.size();

        vector<int> f[26];
        In_range(i, 0, n) f[s[i] - 'a'].push_back(i);

        int cur = s[0] - 'a', des = s[n - 1] - 'a';
        cout << abs(des - cur) << " ";
        vector<int> ans;
        while (true)
        {
            for (auto i : f[cur])
                ans.push_back(i + 1);
            if (cur == des)
                break;
            (cur < des) ? cur++ : cur--;
        }
        cout << ans.size() << endl;
        for (int tile : ans)
            cout << tile << " ";
        cout << endl;
    }

    return 0;
}