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
    int target;
    cout<<"enter the target value";
    cin>>n;
    
    int start =0; int end = n-1;
    for(int i=0;i<n;i++)
    {
      int mid = start + (end - start)/2;
      if(arr[i]==arr[mid])
      {
        cout<<target;
      }
      else if(arr[start]<arr[mid])
      {
        if(arr[start]<=target  && arr[mid]>target)
        {
end = mid -1;
        }
        else{
        start = mid +1;
      }

    }
    else
    {
       if(arr[mid]<target && arr[end]>=target)
       {
           start = mid + 1;
        }
        else{
            end = mid - 1;
      }
       }
      }
    
    }
