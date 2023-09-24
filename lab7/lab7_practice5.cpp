#include<iostream>
using namespace std;
int main()
{
    int arr[10], i,j,n, count=0;
    cout<<"Enter no. of elements in array: ";
    cin>>n;

    cout<<"Enter elements in array: ";
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
                break;
            }
        }
    }
    cout<<"\nTotal duplicate element:"<<count;
    return 0;
}
