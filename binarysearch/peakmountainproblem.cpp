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
    int target;
    int start = 0; int end = n-1; int mid;
    for(int i=0;i<n;i++)
    {
        mid = start + (end - start)/2;
        if(arr[mid]>arr[mid-1]  && arr[mid]>arr[mid + 1])
        {
        cout<<"mid value "<<arr[mid];
        break;
    }


    else if(arr[mid]>arr[mid-1])
    {
    start = mid +1;
    }
    else
    end =  mid -1;
}
}