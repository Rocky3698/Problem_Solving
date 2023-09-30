#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        string s, x;
        cin >> s >> x;
        // cout<<s.find(x)<< " "<<x.size()<<endl;
        while (s.find(x) != -1)
        {
            s.replace(s.find(x), x.size(), "$");
        }
        cout << s << endl;
    }

    return 0;
}