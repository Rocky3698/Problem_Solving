#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef pair<int,int>pii;
const int INF=1e9+7;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin>>n;
    string s;
    cin>>s;
    int a=0,d=0;
    for(char c:s){
        if(c=='A')a++;
        else d++;
    }
    if(a>d)cout<<"Anton"<<endl;
    else if(a<d)cout<<"Danik"<<endl;
    else cout<<"Friendship"<<endl;

    return 0;
}