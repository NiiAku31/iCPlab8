#include<iostream>
  
using namespace std;
  
void LinearIndx(int matrix[32][32], int row, int col)
{
    int i, j;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (i < j)
            {
                cout << "0"<< " ";
            }
            else
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}



  

int main()
{
    int matrix[32][32] = {{3, 2, 3}, 
                        {4, 8, 6}, 
                        {7, 10, 11}};
    int row = 32, col = 32;
      
    cout << "Lower triangular matrix: \n";
    LinearIndx(matrix, row, col);
          
    return 0;
}