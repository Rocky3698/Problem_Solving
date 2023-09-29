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
    int freq[10] = {0};
    cin >> s;
    for (char c : s)
        freq[c - '0']++;
    if (freq[4] + freq[7] == 7 )
        cout << "YES" << endl;
    else if (freq[4] + freq[7] == 4 )
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}