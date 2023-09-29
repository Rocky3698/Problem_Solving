#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef pair<int, int> pii;
const int INF = 1e9 + 7;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    cin >> s;
    vector<char> c;
    if (s.size() == 1)
        cout << s[0] << endl;
    else
    {
        for (char x : s)
        {
            if (x >= '0' && x <= '9')
                c.push_back(x);
        }
        int si = s.size() - c.size();
        sort(c.begin(), c.end());
        for (int i = 0; i < c.size(); i++)
        {
            cout << c[i];
            if (si--)cout<<"+";
        }
    }

    return 0;
}