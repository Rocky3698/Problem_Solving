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
        long long a, b;
        cin >> a >> b;
        if (a == b)
        {
            a % 2 == 0 ? cout << "CHEFINA" << endl : cout << "CHEF" << endl;
        }
        else if(a==2&&b==1){
            cout<<"CHEF"<<endl;
        }
        else if (a - b == -1)
        {
            cout << "CHEF" << endl;
        }
        else if (a - b == 1)
        {
            cout << "CHEFINA" << endl;
        }
        else if (a > b)
        {
            cout << "CHEF" << endl;
        }
        else
            cout << "CHEFINA" << endl;
    }

    return 0;
}