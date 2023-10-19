#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define For(i, s, n) for (int i = s; i < n; i++)
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
        map<char, long long> Fc;
        map<char, long long> Sc;
        map<string, long long> ms;
        vector<string> vs;
        For(i, 0, n)
        {
            string s;
            cin >> s;
            vs.push_back(s);
            ms[s]++;
            Fc[s[0]]++;
            Sc[s[1]]++;
        }
        long long ans = 0;
        For(i, 0, n)
        {
            ans += max((long long)0, Fc[vs[i][0]] - ms[vs[i]] + Sc[vs[i][1]] - ms[vs[i]]);
            if (Fc[vs[i][0]] > 0)
                Fc[vs[i][0]]--;
            if (Sc[vs[i][1]] > 0)
                Sc[vs[i][1]]--;
            if (ms[vs[i]] > 0)
                ms[vs[i]]--;
        }
        cout << ans << endl;
    }

    return 0;
}