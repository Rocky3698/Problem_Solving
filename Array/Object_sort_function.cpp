#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
class student
{
public:
    string name;
    int ID;
    float marks;
};
bool cmp(student a,student b){
    if(a.ID<b.ID)return true;
    else return false;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    student s[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> s[i].name >> s[i].ID >> s[i].marks;
    }
    sort(s,s+3,cmp);//calling custom sort function
    for (int i = 0; i < 3; i++)
    {
        cout << s[i].ID << " " << s[i].marks << " " << s[i].name << endl;
    }

    return 0;
}