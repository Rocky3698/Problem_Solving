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

    string s;
    cin >> s;
    int n = s.size(), freq[26] = {0};
    In_range(i, 0, n) freq[s[i] - 'A']++;
    int cur = 0;
    char ans[n];
    bool extra = false, possible = true;
    In_range(i, 0, 26)
    {
        if (!freq[i])
            continue;
        if (freq[i] % 2)
        {
            if (extra)
            {
                possible = false;
                break;
            }
            extra = true;
            ans[(n - 1) / 2] = (char)i + 'A';
            freq[i]--;
        }
        while (freq[i])
        {
            ans[n - 1 - cur] = (char)i + 'A';
            ans[cur++] = (char)i + 'A';
            freq[i] -= 2;
        }
    }
    if (possible)
        for (char c : ans)
            cout << c;
    else
        cout << "NO SOLUTION";

    return 0;
}