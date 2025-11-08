#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cout<<"enter the size of array";
    cin>>n;
    int arr[n];
    cout<<"enter the element of array";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int ans = 0;
    for(int i=0;i<n;i++)
    {
        ans = ans ^ arr[i];
    }
    cout<<"the number that appear once"<<ans;
    return 0;
}