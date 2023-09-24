//*to add two matrices*//

#include<iostream>
using namespace std;
int main()
{
    int mat1[10][10], mat2[10][10], result[10][10], row, col, i, j;
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
    cout<<"Output: "<<endl;
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            result[i][j] = mat1[i][j] + mat2[i][j];
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;

}
