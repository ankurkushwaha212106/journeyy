#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of array: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int suffix[n];
    suffix[n - 1] = arr[n - 1];  // last element stays same

    for(int i = n - 2; i >= 0; i--)
    {
        suffix[i] = suffix[i + 1] + arr[i];
    }

    cout << "Suffix sum array: ";
    for(int i = 0; i < n; i++)
    {
        cout << suffix[i] << " ";
    }

    return 0;
}
