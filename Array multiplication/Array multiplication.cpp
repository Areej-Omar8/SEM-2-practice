
#include <iostream>
using namespace std;

int main()
{
    const int rows = 2;
    const int cols = 2;
    int arr1[rows][cols] = {
        {1,2},
        {6,8}
    };
    int arr2 [cols];
   
    for (int j = 0; j < cols; j++)
    { 
        arr2[j] = 1;
        
    }
    for (int j = 0; j < cols; j++)
    {
        for (int i = 0; i < rows; i++) 
        { arr2[j] *= arr1[i][j]; 
        }

    }
    cout << "product is: ";
    for (int j = 0; j < cols; j++)
    {
        cout << arr2[j] <<"  ";
    }
}
