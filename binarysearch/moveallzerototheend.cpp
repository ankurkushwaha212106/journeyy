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
int index = -1;
for(int i=0;i<n;i++)
{
    if(arr[i]==0 && index == -1)
    {
        index = i;
    }
    else if(arr[i]!=0 && index !=-1)
    {
        swap(arr[i] , arr[index]);
        index++;
    }
}
for(int i=0;i<n;i++)
{
    cout<<arr[i];
}
    return 0;

}
