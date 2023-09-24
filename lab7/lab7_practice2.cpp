#include<iostream>
using namespace std;
int main()
{
    int n, arr[50], i, largest, second;
    cout<<"Enter the number of elements: "<<endl;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cout<<"Enter element "<<(i+1)<<":"<<endl;
        cin>>arr[i];
    }
    if(arr[0]<arr[1])
    {
        largest = arr[1];
        second = arr[0];
    }
    else{
        largest = arr[0];
        second = arr[1];
    }
    for(i=2; i<n; i++)
    {
        if(arr[i]>largest){
            second = largest;
            largest = arr[i];
        }
        else if(arr[i]>second && arr[i] != largest){
            second = arr[i];
        }
    }
    cout<<"\nSecond largest element in array is: "<<second;
    return 0;
}
