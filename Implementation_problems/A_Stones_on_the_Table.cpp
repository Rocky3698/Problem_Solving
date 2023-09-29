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
    string s;
    cin >> s;
    stack<char> st;
    st.push(s[0]);
    int count = -1;
    for (char c : s)
        if (!st.empty() && st.top() == c)
            count++;
        else
            st.push(c);

    cout << count << endl;
    return 0;
}