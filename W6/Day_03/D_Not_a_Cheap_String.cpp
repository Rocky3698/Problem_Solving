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
        string w;
        cin >> w;
        int p;
        cin >> p;

        int sum = 0;
        vector<pair<int, int>> v;
        In_range(i, 0, w.size())
        {
            int x = w[i] - '`';
            sum += x;
            v.push_back({x, i});
        }

        sort(v.rbegin(), v.rend());
        vector<int> del;
        for (int i = 0; sum > p; i++)
        {
            sum -= v[i].first;
            del.push_back(v[i].second);
        }

        sort(del.begin(), del.end());
        string ans = "";
        for (int i = 0, j = 0; i < w.size(); i++)
        {
            if (j < del.size() && i == del[j])
                j++;
            else
                ans += w[i];
        }
        cout << ans << endl;
    }
    return 0;
}