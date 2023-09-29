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

    string s, s1;
    cin >> s >> s1;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'A' & s[i] <= 'Z')
            s[i] += 32;
        if (s1[i] >= 'A' & s1[i] <= 'Z')
            s1[i] += 32;
        if (s[i] > s1[i])
        {
            cout << "1" << endl;
            return 0;
        }
        else if (s[i] < s1[i])
        {
            cout << "-1" << endl;
            return 0;
        }
    }
    cout << "0" << endl;

    return 0;
}