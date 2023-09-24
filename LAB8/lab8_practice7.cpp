//*find lower triangular matrix*//
#include<iostream>
using namespace std;
int main()
{
    int mat[10][10], row, col, i, j, islower=0;
    cout<<"Enter number of rows and columns: ";
    cin>>row>>col;
    cout<<"Enter the elements: ";
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
    islower = 1;
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            if(j>i && mat[i][j] != 0)
            {
                islower = 0;
            }
        }
    }
    if(islower == 1)
    {
        cout<<"The matrix is lower triangular matrix."<<endl;
    }else{
    cout<<"The matrix is not a lower triangular matrix.";
    }
    return 0;
}
