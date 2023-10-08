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

    string s;
    cin >> s;
    if (s.size() == 1)
    {
        cout << "0" << endl;
        return 0;
    }
    long long sum = 0;
    for (char c : s)
        sum += c - '0';
    if (sum < 10)
    {
        cout << "1" << endl;
        return 0;
    }
    long long ans = 0;
    int c = 1;
    while (true)
    {
        while (sum != 0)
        {
            ans += sum % 10;
            sum /= 10;
        }
        c++;
        if (ans < 10)
            break;
        else
        {
            sum = ans;
            ans = 0;
        }
    }
    cout << c << endl;

    return 0;
}