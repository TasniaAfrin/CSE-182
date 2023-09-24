//*inserting an element*//

#include<iostream>
using namespace std;
int main()
{
    int arr[10], location, i, j, n;
    cout<<"Enter the no. of elements of array: ";
    cin>>n;
    cout<<"\nEnter the elements: ";
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the element that has to insert: ";
    cin>>j;
    cout<<"Location of inserting element: ";
    cin>>location;
    for(i=n-1; i>=location; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[location] = j;
    cout<<"\nNew list of elements:\n";
    for(i=0; i<n+1; i++)
    {
        cout <<arr[i] <<"\n";
    }
    return 0;
}
