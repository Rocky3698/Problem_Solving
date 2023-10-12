#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define For(i, s, n) for (int i = s; i < n; i++)
typedef pair<int, int> pii;
const int INF = 1e9 + 7;
const int N = 1e5 + 5;
const int M = 1e3 + 5;
int i, j;
bool isExistSub(string s, string sub)
{

    if(s.size()<sub.size())
        return false;
    For (i,0,s.size())
    {
        if (sub[0] == s[i])
        {
            if (sub.size() == 1)
                return true;
            For (j,1,sub.size())
            {
                if (sub[j] != s[i + j])
                    break;
                if (j == sub.size() - 1)
                    return true;
            }
        }
    }
    return false;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        string s, sub;
        cin >> s >> sub;
        int op = 0;
        while (n < m)
        {
            n *= 2;
            s += s;
            op++;
        }
        if (s == sub || isExistSub(s, sub))
        {
            cout << op << endl;
            continue;
        }
        s += s;
        op++;
        if (isExistSub(s, sub))
            cout << op << endl;
        else
            cout << -1 << endl;
    }

    return 0;
}