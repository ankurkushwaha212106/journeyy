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
   
    for(int i=0;i<n-1;i++)
    {
int sum1 =0;int sum2 = 0;
for(j=0;j<=i;j++)
{
    sum1 + sum2 = 0;

}
for(j=i+1;j<n;j++)
{
    sum2 += arr[j];
}
if(sum1 == sum2)
{
    return 1;
}
else return -1;


    }
    return 0;
}