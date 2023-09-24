//*program to check whether two matrices are equal or not*//

#include<iostream>
using namespace std;
int main()
{
     int mat1[10][10], mat2[10][10], result[10][10], row, col, i, j, isEqual;
     cout<<"Enter the number of rows= ";
     cin>>row;
     cout<<"Enter the number of columns= ";
     cin>>col;
     cout<<"Enter the elements of first matrix:\n";
     for(i=0; i<row; i++)
     {
         for(j=0; j<col; j++)
         {
             cin>>mat1[i][j];
         }
     }
     cout<<"Enter the elements of second matrix:\n";
     for(i=0; i<row; i++)
     {
         for(j=0; j<col; j++)
         {
             cin>>mat2[i][j];
         }
     }
     isEqual = 1;
     for(i=0; i<row; i++)
     {
         for(j=0; j<col; j++)
         {
             if(mat1[i][j] != mat2[i][j])
             {
                 isEqual = 0;
                 break;
             }
         }
     }
     if(isEqual == 1)
     {
         cout<<"\nTwo matrices are equal.";
     }
     else{
        cout<<"\nMatrices are not equal.";
     }
     return 0;

 }

