//*Write a C++ program to find the reverse of an array using the function.*//
#include <iostream>
using namespace std;
void reverseArray(int*arr, int size)
{
    int s, e;
    s = 0;
    e = size - 1;
    while(s < e)
    {
        int temp = arr[s];
        arr[s] = arr[e];
        arr[e] = temp;
        s++;
        e--;
    }
}
int main()
{
    int arr[5] = {6, 8, 5, 4, 3};
    reverseArray(arr, 5);
    cout<<"Reverse of the array is ";
    for(int i = 0; i < 5; i++)
    {
        cout<< arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
