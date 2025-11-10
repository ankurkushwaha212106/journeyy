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
    int start = 0; int end = n-1;
    int data;
    int target;
    cout<<"enter the target value";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int mid = start + (end -start)/2;
if(arr[mid]<=target)
{
    data = arr[mid];
    start = mid + 1;
}
else
end = mid - 1;

    }
    cout<<"data"<< data <<endl;
    return 0;
}
