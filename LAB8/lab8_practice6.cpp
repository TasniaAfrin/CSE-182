//*Write a C++ program to find the sum of the minor diagonal elements of a matrix.*//
#include<iostream>
using namespace std;
int main()
{
  int a[10][10],r,c,i,j,sum = 0;
  cout<<"Enter the number of rows = ";
  cin>>r;
  cout<<"Enter the number of columns = ";
  cin>>c;
  //first matrix
  cout<<"Enter the elements of the matrix:"<<endl;
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
      cin>>a[i][j];
    }
  }
  for(i=0;i<r;i++)
  {
      sum+=a[i][r - i -1];
  }
  cout << "The sum of the minor diagonal elements is: " << sum << endl;

  return 0;
}
