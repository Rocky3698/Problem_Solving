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

    long long x, y;
    cin>>x>>y;
    for (int i = 1;; i++)
    {
        x = 3 * i * x;
        y = 2 * i * y;
        // cout<<x<<" "<<y<<endl;
        if (x > y)
        {
            cout << i << endl;
            break;
        }
    }

    return 0;
}