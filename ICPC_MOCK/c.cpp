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

    class Solution
    {
    public:
        int search(string p, string s)
        {
            // code here
            int frp[26] = {0};
            for (char c : p)
                frp[c - 'a']++;
            int i = 0, j = 0, ans = 0;
            int frs[26] = {0};
            while (j < s.size())
            {
                frs[s[j] - 'a']++;
                if (j >= p.size() - 1)
                {
                    bool tmp = true;
                    for (int c = 0; c < 26; c++)
                    {
                        if (frs[c] != frp[c])
                        {
                            tmp = false;
                            break;
                        }
                    }
                    if (tmp)
                        ans++;
                    frs[s[i] - 'a']--;
                    i++;
                }
                j++;
            }
            return ans;
        }
    };

    return 0;
}