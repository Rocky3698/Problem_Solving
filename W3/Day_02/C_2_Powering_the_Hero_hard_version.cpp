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

    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long card, power = 0;
        priority_queue<long long> pq;
        For(i, 0, n)
        {
            cin >> card;
            if (!card && pq.size())
            {
                power += pq.top();
                pq.pop();
            }
            else if (card)
                pq.push(card);
        }
        cout << power << endl;
    }

    return 0;
}