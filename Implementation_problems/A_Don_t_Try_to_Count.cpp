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
        int n, m;
        cin >> n >> m;
        string s, sub;
        cin >> s >> sub;
        int op = 0;
        while (true)
        {
            if (s.find(sub) != -1)
                break;
            if (op != 0 && s.length() > 2 * m)
            {
                op = -1;
                break;
            }
            s += s;
            op++;
        }
        cout << op << endl;
    }

    return 0;
}