#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
class student
{
public:
    string name;
    int clas;
    char section;
    int math_marks, eng_marks;
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
        cin >> group[i].name >> group[i].clas >> group[i].section >> group[i].math_marks >> group[i].eng_marks;
    }
    for (int i = n - 1; i >= 0; i--)
    {
        cout << group[i].name << " " << group[i].clas << " " << group[i].section << " " << group[i].math_marks << " " << group[i].eng_marks << " " << endl;
    }

    return 0;
}