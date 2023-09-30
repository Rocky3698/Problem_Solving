#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
class student
{
public:
    string name;
    int clas;
    char section;
    int ID;
};
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    student group[n];
    for (int i = 0; i < n; i++)
    {
        cin >> group[i].name >> group[i].clas >> group[i].section >> group[i].ID;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j == 0)
            {
                cout << group[i].name << " ";
            }
            if (j == 1)
            {
                cout << group[i].clas << " ";
                cout << group[i].section << " ";
            }
            if(j==n-1)
            {
                cout << group[j-i].ID << " ";
            }
        }
        cout<<endl;
    }

    return 0;
}