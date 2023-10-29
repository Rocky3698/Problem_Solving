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
        int n;
        cin>>n;
        ll arr[n];ll sum=0;
        In_range(i,0,n){
            cin>>arr[i];
            sum+=abs(arr[i]);
        }
        j=0;
        int op=0;bool flag=false;
        while(j<n){
            if(arr[j]<0){
                flag =true;
            }
            if(arr[j]>0&&flag){
                op++;flag =false;
            }
            j++;
        }
        if(flag)op++;
        cout<<sum<<" "<<op<<endl;
    }

    return 0;
}