//*A C++ program to sort arrays using pointers and functions*//
#include<iostream>
using namespace std;
void sort_array(int* array, int size)
{
    for(int i = 0; i < size-1; i++)
    {
        int smallest_index = i;
        for(int j = i+1; j < size; j++)
        {
            if(array[j] < array[smallest_index])
            {
                smallest_index = j;
            }
        }
        int temp = array[i];
        array[i] = array[smallest_index];
        array[smallest_index] = temp;
    }
}
int main()
{
    int array[] = {5, 3, 2, 1, 4};
    sort_array(array, sizeof(array) / sizeof(array[0]));
    cout<<"The sorted array: "<<endl;
    for (int i = 0; i < sizeof(array) / sizeof(array[0]); i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
    return 0;
}
