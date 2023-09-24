//*delete an element from an array*//

#include<iostream>
using namespace std;
int main()
{
    int arr[10], i, j, n;
    cout<<"\nEnter the no. of elements: ";
    cin>>n;
    cout<<"\nEnter the elements:";
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }
        cout<<"Enter the number of position that has to delete: ";
        cin>>j;
            for(i=j; i<n; i++)
            {
                arr[i-1]=arr[i];
            }
            n = n-1;
            cout<< "\n";
            for(i=0; i<n; i++)
            {
                cout <<arr[i] <<"\n";
            }
    return 0;
}
