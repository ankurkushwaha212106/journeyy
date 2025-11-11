#include<iostream>
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
for(int i=0;i<n;i++)
{
    for(int j=i+1;j<n;j++)
    {
    if(arr[j]<arr[j-1])
    {
        swap(arr[j] , arr[j-1]);
        j++;
    }
}
}
for(int i=0;i<n;i++)
{
    cout<<arr[i];
}
return 0;
}
