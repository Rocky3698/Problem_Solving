#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    bool flag = false;
    string s;
    getline(cin, s);
    // s.find("Ratul") != (-1) ? cout << "YES" << endl : cout << "NO" << endl;
    stringstream ss(s);
    string word;
    while (ss >> word)
    {
        if (word == "Ratul")
        {
            flag = true;
            break;
        }
    }
    flag ? cout << "YES" << endl : cout << "NO" << endl;
    return 0;
}