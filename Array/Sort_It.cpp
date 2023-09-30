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
    int math_marks, eng_marks;
};
bool func(student a, student b)
{
    if (a.eng_marks + a.math_marks > b.eng_marks + b.math_marks)
        return true;
    else if (a.eng_marks + a.math_marks == b.eng_marks + b.math_marks)
    {
        if (a.ID < b.ID)
            return true;
        else
            return false;
    }
    else
        return false;
}
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
        cin >> group[i].name >> group[i].clas >> group[i].section >> group[i].ID >> group[i].math_marks >> group[i].eng_marks;
    }
    sort(group, group + n, func);
    for (int i = 0; i < n; i++)
    {
        cout << group[i].name << " " << group[i].clas << " " << group[i].section <<" "<< group[i].ID <<" "<< group[i].math_marks <<" "<< group[i].eng_marks << endl;
    }
    return 0;
}