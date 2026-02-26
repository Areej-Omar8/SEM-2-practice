

#include <iostream>
using namespace std;

int main()
{
    const int row1=3;
    const int cols1 = 1;
    const int row2 = 1;
    const int cols2 = 3;
    int arr1[row1][cols1] = {
        {1},{2},{3}
    };
    int arr2[row2][cols2] = {
        {3,2,1}
    };
    int arr3[row1][cols2];
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < cols2; j++)
        {
            arr3[i][j] = 0;
            for (int k = 0; k < cols1; k++)
            {
                arr3[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
        
    }
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < cols2; j++)
        {
            cout << arr3[i][j] << " ";

        }
        cout << endl;
    }
}

