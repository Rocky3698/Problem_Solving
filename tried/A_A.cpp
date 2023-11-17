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
        int arr1[3],arr2[3];
        In_range(i,0,3)cin>>arr1[i];
        In_range(i,0,3)cin>>arr2[i];
        sort(arr1,arr1+3);
        sort(arr2,arr2+3);
        bool flag=true,alice=false,bob=false;
        for(i=2;i>=0;i--){
            if(arr1[i]!=arr2[i]){
                flag=false;
                if(arr1[i]>arr2[i]){
                    alice=true;
                    break;
                }
                else 
                {
                    bob=true;
                    break;

                }
            }
        }
        if(flag)cout<<"Tie"<<endl;
        if(alice)cout<<"Alice"<<endl;
        if(bob)cout<<"Bob"<<endl;
    }

    return 0;
}