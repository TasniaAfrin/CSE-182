//*to check whether a matrix is sparse or not*//
#include<iostream>
using namespace std;
int main()
{
    int mat[10][10], row, col, i, j, count=0;
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
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            if(mat[i][j] == 0)
            {
                count++;
            }
        }
    }
    cout<<"Given matrix:"<<endl;
        for(i=0; i<row; i++)
        {
            for(j=0; j<col; j++)
            {
                cout<<mat[i][j]<<" ";
            }
            cout<<"\n";
        }
        if(count >= (row*col)/2)
        {
            cout<<"This is a sparse matrix."<<endl;
        }else{
        cout<<"This is not a sparse matrix."<<endl;
        }
        return 0;
    }
