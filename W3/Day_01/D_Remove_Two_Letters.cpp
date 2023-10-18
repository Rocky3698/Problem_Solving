#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define For(i, s, n) for (int i = s; i < n; i++)
typedef pair<int, int> pii;
const int INF = 1e9 + 7;
const int N = 1e5 + 5;
const int M = 1e3 + 5;
int i, j;
string rev(string s)
{
    reverse(s.begin(), s.end());
    return s;
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
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<string> vs;
        For(i, 0, n - 1)
        {
            string x = s.substr(i, 2);
            if (!i || (vs.back() != x && rev(vs.back()) != x))
                vs.push_back(x);
        }
        cout << vs.size() << endl;
    }

    return 0;
}