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
    
    bool found = false;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
               cout << "Duplicate value: " << i << j <<endl;
                found = true;
                break;
            }
        }
    }
    if(!found)
    {
        cout<<"does not found duplicate value"<<endl;
    }
    return 0;
    
}