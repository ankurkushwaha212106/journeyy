#include<iostream>
using namespace std;

int firstOccurrence(int arr[], int n, int target)
{
    int start = 0, end = n - 1;
    int ans = -1;

    while(start <= end)
    {
        int mid = start + (end - start) / 2;

        if(arr[mid] == target)
        {
            ans = mid;          // store answer
            end = mid - 1;      // look on left side for first occurrence
        }
        else if(arr[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return ans;
}

int lastOccurrence(int arr[], int n, int target)
{
    int start = 0, end = n - 1;
    int ans = -1;

    while(start <= end)
    {
        int mid = start + (end - start) / 2;

        if(arr[mid] == target)
        {
            ans = mid;          // store answer
            start = mid + 1;    // look on right side for last occurrence
        }
        else if(arr[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter sorted elements of array: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int target;
    cout << "Enter the target value: ";
    cin >> target;

    int first = firstOccurrence(arr, n, target);
    int last = lastOccurrence(arr, n, target);

    if(first == -1)
        cout << "Element not found!";
    else
    {
        cout << "First occurrence at index: " << first << endl;
        cout << "Last occurrence at index: " << last << endl;
    }

    return 0;
}
