//*to find the sum of the main diagonal elements of a matrix*//

#include<iostream>
 using namespace std;
 int main()
 {
     int mat[10][10], row, col, i, j, sum=0;
     cout<<"Enter the number of rows= ";
     cin>>row;
     cout<<"Enter the number of columns= ";
     cin>>col;
     cout<<"Enter the elements of the matrix:\n";
     for(i=0; i<row; i++)
     {
         for(j=0; j<col; j++)
         {
             cin>>mat[i][j];
         }
     }
     cout<<"Matrix: "<<endl;
     for(i=0; i<row; i++)
     {
         for(j=0; j<col; j++)
         {
             cout<<mat[i][j]<<" ";
         }
         cout<<endl;
     }
     for(i=0; i<row; i++)
     {
         for(j=0; j<col; j++){
            if(i == j)
                sum = sum+mat[i][j];
         }
     }
     cout<<"Sum of the main diagonal elements: "<<sum;
     return 0;

 }
