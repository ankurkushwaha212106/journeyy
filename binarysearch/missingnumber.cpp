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
    int sum =0;
    for(int i=0;i<n;i++)
    {
        sum += arr[i];
    }
    int total = n*(n+1)/2;
cout<<"missing number"<<total - sum<<endl;
return 0;
}