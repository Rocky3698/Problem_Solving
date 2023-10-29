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
    vector<string> vs;
    In_range(i, 0, n)
    {
        string s;
        cin >> s;
        vs.push_back(s);
    }
    queue<string> ss;
    map<string, bool> mp;
    for (int i = n - 1; i >= 0; i--)
    {
        if (!(mp[vs[i]]))
            ss.push(vs[i]);
        mp[vs[i]] = true;
    }
    while (!ss.empty())
    {
        string s = ss.front();
        ss.pop();
        cout << s[s.size() - 2] << s[s.size() - 1];
    }
    cout << endl;
    return 0;
}