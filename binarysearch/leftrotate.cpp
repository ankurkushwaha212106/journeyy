#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the size of array";
    cin>>n;
    int rotate;
    int arr[n];
    cout<<"enter the element of array";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int temp = arr[0];
    
    for(int i=0;i<n-1;i++)
    {

    arr[i]=arr[i+1];
    }
    arr[n-1]=temp;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
    
    
}