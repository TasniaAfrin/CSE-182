//*A C++ program to change the value of a constant integer using pointers*//

#include<iostream>
using namespace std;
int main()
{
    int a = 100;
    int* p;
    p = &a;
    *p = 200;
    cout<<"Value of a: "<<a<<endl;
    return 0;
}
