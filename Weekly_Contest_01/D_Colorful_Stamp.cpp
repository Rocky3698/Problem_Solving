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
        string s;
        cin >> s;
        string x;
        vector<string> v;
        int w = 0;
        For(i, 0, n)
        {
            if (s[i] != 'W')
                x += s[i];
            else
            {
                w++;
                if (x.size())
                {
                    v.push_back(x);
                    x.clear();
                }
            }
        }
        if (s[n - 1] != 'W')
            v.push_back(x);
        if (w == s.size() && s.size() > 1)
        {
            cout << "YES" << endl;
            continue;
        }

        bool flag = true;
        for (string s : v)
        {
            int B = 0, R = 0;
            For(i, 0, s.size())
            {
                if (s[i] == 'B')
                    B++;
                else
                    R++;
            }
            if (B == 0 || R == 0)
            {
                cout << "NO" << endl;
                flag = false;
                break;
            }
        }
        if (flag)
            cout << "YES" << endl;
    }

    return 0;
}