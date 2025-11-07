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
    int num;
    cout<<"enter the number to search";
    cin>>num;
    bool found = false;
    for(int i=0;i<n;i++)
    {
        if(arr[i] == num)
        {
            cout<<"number is found at index"<< i <<endl;
            found = true;
            break;
        
        }
    }
    if(!found)
    {
        cout<<"num is not found in the array"<<endl;
    }
    return 0;
}