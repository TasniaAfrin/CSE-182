#include<iostream>
using namespace std;
int main()
{
    int arr[6], even=0, odd=0, i;
    cout<<"Enter the elements of array: ";
    for(i=0; i<6; i++)
        cin>>arr[i];
    for(i=0; i<6; i++)
    {
        if(arr[i]%2 == 0)
            even++;
        else
            odd++;
    }
    cout<<"\nTotal even numbers of the array: "<<even;
    cout<<"\nTotal odd numbers of the array: "<<odd ;
    cout<<endl;
    return 0;
}
