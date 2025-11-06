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
    cin>>target;
    bool found = false;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
    {
        if(arr[i]+arr[j]==target)
        {
 cout << "Pair found: " << arr[i] << " + " << arr[j] << " = " << target << endl;
                
found = true;
        } 
        
    }
    }
    if(!found)
    {
        cout<<"no such pair found"<<endl;
    }
    return 0;
}