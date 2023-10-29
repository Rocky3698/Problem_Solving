#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define In_range(i,s,n)for(int i=s;i<n;i++)
typedef pair<int,int>pii;
const int INF=1e9+7;
const int N=1e5+5;
const int M=1e3+5;
int i,j;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin>>t;
    while(t--){
        string s1,s2;
        cin>>s1>>s2;
        int p1=0,p2=0;
        for(char c:s1){
            if(c=='X')p1++;
            else if(c=='L')p1+=3;
            else if(c=='M')p1+=2;
            else p1=1-p1;
        }
        for(char c:s2){
            if(c=='X')p2++;
            else if(c=='L')p2+=3;
            else if(c=='M')p2+=2;
            else p2=1-p2;
        }
        if(p1>p2)cout<<">"<<endl;
        else if(p1==p2)cout<<"="<<endl;
        else cout<<"<"<<endl;
        // cout<<p1<<" "<<p2<<endl;
    }

    return 0;
}