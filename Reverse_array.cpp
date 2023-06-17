#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
void reverse(int arr[], int start, int end)
{

    if (start >= end)
        return;
    swap(arr[start], arr[end]);
    reverse(arr, ++start, --end);
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    reverse(arr, 0, size - 1);
    
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}