#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define For(i, s, n) for (int i = s; i < n; i++)
typedef pair<int, int> pii;
const int INF = 1e9 + 7;
const int N = 1e5 + 5;
const int M = 1e3 + 5;
int i, j;
vector<long long> printFirstNegativeInteger(long long int A[], long long int N, long long int K)
{
    long long i = 0, j = 0;
    queue<long long> q;
    vector<long long> v;
    while (j < N)
    {
        if (A[j] < 0)
            q.push(A[j]);
        if (j >= K - 1)
        {
            if (q.size())
                v.push_back(q.front());
            else
                v.push_back(0);
            if (A[i] < 0)
                q.pop();
            i++;
        }
        j++;
    }
    return v;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    return 0;
}