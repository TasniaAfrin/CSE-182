//*to perform scalar matrix multiplication*//

 #include<iostream>
 using namespace std;
 int main()
 {
     int mat[10][10], result[10][10], row, col, i, j, k;
     cout<<"Input scalar: ";
     cin>>k;
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
             result[i][j] = k*mat[i][j];
             cout<<result[i][j]<<" ";
         }
         cout<<endl;
     }
     return 0;

 }
