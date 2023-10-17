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
        vector<string> vs;
        For(i, 0, n)
        {
            string s;
            cin >> s;
            vs.push_back(s);
        }
        vector<string> cpy;
        vector<char>vc;
        For(i, 0, n)
        {
            string s;
            char c='a';
            For(j, 0, n)
            {
                // if()
                s += vs[n-j-1][i];
            }
            cpy.push_back(s);
        }
        // for(auto s:cpy)cout<<s<<endl;
        int ans =0;
        For(i, 0, n)
        {
            For(j, 0, n)
            {
                if (vs[i][j] != cpy[i][j])
                {
                    int x = abs((int)(vs[i][j] - cpy[i][j]));
                    ans += x;
                }
            }
        }
        cout << ans << endl;
    }

    return 0;
}