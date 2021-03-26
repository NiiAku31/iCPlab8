#include<iostream>
  
using namespace std;
  
void LinearIndx(int matrix[128][128], int row, int col)
{
    int i, j;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (i < j)
            {
                cout << "0" << " ";
            }
            else
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}



  

int main()
{
    int matrix[128][128] = {{1, 2, 3}, 
                        {4, 5, 6}, 
                        {7, 8, 9}};
    int row = 128, col = 128;
      
    cout << "Lower triangular matrix: \n";
    LinearIndx(matrix, row, col);
          
    return 0;
}