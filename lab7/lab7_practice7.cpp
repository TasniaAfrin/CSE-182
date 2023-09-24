#include<iostream>
using namespace std;
int main()
{
    int a[5], i;
    cout<<"Enter array elements: ";
    for(i=0; i<=4; i++)
        cin>>a[i];
    cout<<"Reverse order of the array: ";
    for(i=4; i>=0; i--)
        cout<<a[i]<<" ";
    return 0;
}
