#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a + b * c == d)
        cout << "YES" << endl;
    else if (a + b - c == d)
        cout << "YES" << endl;
    else if (a - b * c == d)
        cout << "YES" << endl;
    else if (a - b + c == d)
        cout << "YES" << endl;
    else if (a * b + c == d)
        cout << "YES" << endl;
    else if (a * b - c == d)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}