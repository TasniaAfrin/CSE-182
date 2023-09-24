//*to check whether a matrix is is identity or not*//

#include<iostream>
using namespace std;
int main()
{
    int mat[10][10], row, col, i, j, isIdentity=0;
    cout<<"Enter the number rows and columns: ";
    cin>>row>>col;
    if(row != col)
    {
        cout<<"Matrix is not square matrix.";
        exit(0);
    }
    cout<<"Enter the elements: "<<endl;
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
          if((mat[i][j] != 1) && (mat[i][j] != 0))
            {
                isIdentity = 1;
                break;
            }
        }
        if(isIdentity == 0){
            cout<<"The matrix is an identity matrix.\n";
        }else{
        cout<<"The matrix is not an identity matrix.\n";
        }
        for(i=0; i<row; i++)
        {
            for(j=0; j<col; j++)
            {
                cout<<mat[i][j]<<" ";
            }
            cout<<"\n";
        }
        return 0;

    }
}
