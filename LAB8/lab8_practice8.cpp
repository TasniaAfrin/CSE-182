//*to find the sum of upper triangular matrix*//
#include<iostream>
using namespace std;
int main()
{
    int mat[10][10], row, col, i, j, upsum=0;
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
        for(i=0; i<row; i++)
        {
            for(j=0; j<col; j++)
            {
                if(i <= j)
                {
                upsum = upsum+mat[i][j];
                }
            }
        }
    cout<<"The sum of upper triangular matrix: "<<upsum;
    return 0;
}
