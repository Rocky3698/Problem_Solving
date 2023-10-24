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

    int n;
    cin >> n;
    string s;
    cin >> s;
    int a = 0, b = 0;
    // for (char c : s)
    // {
    //     if (c == 'a')
    //         a++;
    //     else
    //         b++;
    // }
    // int ans= max(a,b)-(n/2);
    int count = 0;
    char c;
    for (int i = 0; i < n - 1; i++)
    {
        c = s[i];
        if (s[i] == s[i + 1] && (i + 1) % 2 == 1)
        {
            if (s[i + 1] == 'a')
                s[i + 1]++;
            else
                s[i + 1]--;
            count++;
        }
    }

    cout << count << endl
         << s << endl;
    return 0;
}