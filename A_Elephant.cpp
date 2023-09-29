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

    int n;
    cin >> n;
    int count = 0;
    while (true)
    {
        if (n <= 5)
        {
            cout << ++count << endl;
            break;
        }
        else
        {
            n -= 5;
            count++;
        }
    }
    return 0;
}