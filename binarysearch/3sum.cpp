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
    cout<<"enter the target value";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;i<n;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                if(arr[i]+arr[j]+arr[k]==0)
                {
                    if(i!=j!=k)
                }
            }
        }
        cout<<"target  value"<<arr[i]<< " +  " <<arr[j]<<" + "<<arr[k]<<target <<endl;
        }
        return 0;
}