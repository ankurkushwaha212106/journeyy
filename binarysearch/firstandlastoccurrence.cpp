#include <iostream>
using namespace std;

int searchInRotatedArray(int arr[], int n, int target)
{
    int start = 0, end = n - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] == target)
            return mid; // found

        // Check if left half is sorted
        if (arr[start] <= arr[mid])
        {
            // target lies in left half
            if (target >= arr[start] && target < arr[mid])
                end = mid - 1;
            else
                start = mid + 1;
        }
        // otherwise right half is sorted
        else
        {
            // target lies in right half
            if (target > arr[mid] && target <= arr[end])
                start = mid + 1;
            else
                end = mid - 1;
        }
    }

    return -1; // not found
}

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the rotated sorted array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int target;
    cout << "Enter the target value: ";
    cin >> target;

    int index = searchInRotatedArray(arr, n, target);

    if (index == -1)
        cout << "Element not found!";
    else
        cout << "Element found at index: " << index;

    return 0;
}
