#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int subarraySum(int arr[], int size)
{
    int currentSum = arr[0];
    int maxSum = arr[0];
    for (int i = 1; i < size; i++)
    {
        currentSum = max(arr[i], arr[i] + currentSum);
        maxSum = max(currentSum, maxSum);
    }
    return maxSum;
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
    cout << "Maximum Subarray Sum is " << subarraySum(arr, size) << endl;
    return 0;
}