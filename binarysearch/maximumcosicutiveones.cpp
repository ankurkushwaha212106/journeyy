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
    
    int count =0;
    int maxCount = 0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==1)
        {
            count++;
    maxCount = max(maxCount, count);
        }
        else{
            count = 0;
        }

    }
    cout<<"maximum consicutive ones"<<maxCount;
    return 0;
}