#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define For(i, s, n) for (int i = s; i < n; i++)
typedef pair<int, int> pii;
const int INF = 1e9 + 7;
const int N = 1e5 + 5;
const int M = 1e3 + 5;
int i, j, k;
int DX[4] = {-1, -1, 1, 1}, DY[4] = {-1, 1, -1, 1};
bool Isvalid(int x, int y, int move)
{
    if (move == 0)
        return (x > 0 && y > 0);
    else if (move == 1)
        return (x > 0 && y < 7);
    else if (move == 2)
        return (x < 7 && y > 0);
    else
        return (x < 7 && y < 7);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        char arr[8][8];
        pair<int, int> ans = {0, 0};
        For(i, 0, 8)
        {
            string s;
            cin >> s;
            For(j, 0, 8)
                arr[i][j] = s[j];
        }
        For(i, 0, 8)
        {
            For(j, 0, 8)
            {
                if (arr[i][j] == '#')
                {
                    int m = 0;
                    For(k, 0, 4)
                    {
                        if (Isvalid(i, j, k))
                        {
                            if (arr[i + DX[k]][j + DY[k]] == '#')
                                m++;
                        }
                    }
                    if (m == 4)
                        ans = {i + 1, j + 1};
                }
                if (ans.first > 0)
                    break;
            }
            if (ans.first > 0)
                break;
        }
        cout << ans.first << " " << ans.second << endl;
    }
    return 0;
}
