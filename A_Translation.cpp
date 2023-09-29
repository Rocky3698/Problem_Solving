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

    string s, S;
    cin >> s >> S;
    bool flag = false;
    for (int i = 0; i < s.size(); i++)
        if (s[i] != S[s.size() - 1 - i])
            flag = true;

    if (flag)
        cout << "NO";
    else
        cout << "YES" << endl;

    return 0;
}