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
    int freq[26] = {0};
    for (char c : s)
        freq[c - 'a']++;
    int count = 0;
    for (int i : freq)
        if (i)
            count++;
    (count % 2) ? cout << "IGNORE HIM!" << endl : cout << "CHAT WITH HER!" << endl;
    return 0;
}