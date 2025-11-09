#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of array (from 1 to n, with one missing): ";
    for(int i = 0; i < n - 1; i++)
    {
        cin >> arr[i];
    }

    int ans = 0;
    for(int i = 0; i < n - 1; i++)
    {
        ans = ans ^ arr[i];
    }

    for(int i = 1; i <= n; i++)
    {
        ans = ans ^ i;
    }

    cout << "Missing number: " << ans;
    return 0;
}
