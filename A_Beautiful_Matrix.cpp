#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, y;
    int arr[5][5];
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            int p;
            cin>>p;
            if(p==1){
                x=i;y=j;
            }
        }
    }
    cout << abs(x - 3) + abs(y - 3) << endl;
}