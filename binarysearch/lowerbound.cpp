#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the sorted elements of array: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int target;
    cout << "Enter the target value: ";
    cin >> target;

    int start = 0, end = n - 1;
    int ans = -1;  // store upper bound

    while(start <= end)
    {
        int mid = start + (end - start) / 2;

        if(arr[mid] > target)
        {
            ans = arr[mid];   // possible upper bound
            end = mid - 1;    // search in left half
        }
        else
        {
            start = mid + 1;  // search in right half
        }
    }

    if(ans == -1)
        cout << "No upper bound found (target is >= all elements)";
    else
        cout << "Upper bound: " << ans;

    return 0;
}
