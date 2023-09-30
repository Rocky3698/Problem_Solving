#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
class student{
    public:
        string name;
        int ID;
        float marks;
};
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    student s[3];
    for (int i = 0; i < 3; i++)
    {
        cin>>s[i].name>>s[i].ID>>s[i].marks;
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = i+1; j < 3; j++)
        {
            if(s[i].ID>s[j].ID){
                swap(s[i],s[j]);
            }
        }
        
    }
    for (int i = 0; i < 3; i++)
    {
        cout<<s[i].ID<<" "<<s[i].marks<<" "<<s[i].name<<endl;
    }
    

    return 0;
}