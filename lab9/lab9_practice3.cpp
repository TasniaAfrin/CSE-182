//*to find the maximum element of an array using functions*//
#include<iostream>
using namespace std;

int getLargestElement(int arr[5])
{
    int largest_element = arr[0];
    for(int i = 0; i < 5; i++)
    {
        if(arr[i] > largest_element)
        {
            largest_element = arr[i];
        }
    }
    return largest_element;
}
int main()
{
    int arr[5] = {12, 4, 34, 9, 6};
    int largest_element = getLargestElement(arr);
    cout << "The largest element in the array is: " << largest_element<< endl;
    return 0;
}
