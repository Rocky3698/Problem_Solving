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

    int n;
    cin >> n;
    vector<string> v(n);
    In_range(i, 0, n) cin >> v[i];
    sort(v.begin(), v.end(), [&](string x, string y)
         { return x.size() < y.size(); });
    bool flag = true;
    In_range(i, 0, n - 1)
    {
        string s = v[i + 1];
        if (s.find(v[i]) == -1)
        {
            flag = false;
            break;
        }
    }
    if (flag)
    {
        cout << "YES" << endl;
        for (auto x : v)
            cout << x << endl;
    }
    else
        cout << "NO" << endl;
    return 0;
}