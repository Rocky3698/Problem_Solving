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
    string s;
    cin >> s;
    int i = 0, j = 0;
    map<string, int> mp;
    while (j < s.size())
    {
        if (j >= 1)
        {
            string x = "";
            x += s[i];
            x += s[j];
            mp[x]++;
            i++;
        }
        j++;
    }
    int ans = 0;
    for (auto x : mp)
    {
        ans = max(ans, x.second);
    }
    for (auto x : mp)
    {
        if (x.second == ans)
        {
            cout << x.first << endl;
            break;
        }
    }
    return 0;
}