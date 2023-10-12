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
        int a, b, c;
        cin >> a >> b >> c;
        queue<int> q;
        q.push(a);
        q.push(b);
        q.push(c);
        int mn = min(a, min(b, c));
        int op = 3;
        while (!q.empty())
        {
            if (op == 0)
                break;
            int x = q.front();
            if (x == mn)
            {
                q.pop();
                continue;
            }
            else
            {
                q.push(mn);
                q.push(x - mn);
                q.pop();
                op--;
            }
        }
        bool flag = true;
        while (!q.empty())
        {
            if (q.front() != mn)
                flag = false;
            q.pop();
        }
        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}