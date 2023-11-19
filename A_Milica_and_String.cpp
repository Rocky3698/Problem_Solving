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
        int n,c;
        cin>>n>>c;
        string s;
        cin>>s;
        int B=0;
        for(char C:s)if(C=='B')B++;
        if(c==B)
            cout<<0<<endl;
        else if(c<B){
            int x=B-c,ans;
            In_range(i,0,n){
                if(s[i]=='B')x--;
                if(x==0){
                    ans=i+1;
                    break;
                }
            }
            cout<<"1"<<endl;
            cout<<ans<<" "<<"A"<<endl;
        }
        else{
            int x=c-B;
            int b=0,ans;
            In_range(i,0,n){
                if(s[i]=='B')++b;
                ans=i+1-b;
                if(x==ans){
                    ans=i+1;
                    break;
                }
            }
            cout<<"1"<<endl;
            cout<<ans<<" "<<"B"<<endl;
        }

    }

    return 0;
}