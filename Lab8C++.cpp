#include <iostream>
#include <iomanip>


using namespace std;
int**arr(int m, int n);
void printarr(int** arr, int m, int n);
int sumM(int** arr, int row, int cols);
int sumN(int** arr, int col, int rows);


int main()
{
    int m;
    int n;
    
    cout << "Enter m: ";
    cin >> m;

    cout << "Enter n: ";
    cin >> n;

    
    int** mtrx = arr(m + 1, n + 1);

    
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            mtrx[i][j] = j;
        }
    }

    
    cout << "Matrix A: \n";
    printarr(mtrx, m, n);

    int rowsSum = 0;
    for (int i = 0; i < m; ++i)
    {
        mtrx[i][n] = sumM(mtrx, i, n);
        rowsSum += mtrx[i][n];
    }

    int colsSum = 0;
    for (int j = 0; j < n; ++j)
    {
        mtrx[m][j] = sumN(mtrx, j, m);
        colsSum += mtrx[m][j];
    }

    mtrx[m][n] = rowsSum;
    
    cout << "Matrix B: "<< endl;
    printarr(mtrx, m + 1, n + 1);

    
    for (int i = 0; i < m; i++)
    {
        delete[] mtrx[i];
    }
    delete[] mtrx;

    
    return 0;
}

int**arr(int m, int n)
{
    int** arr = new int* [m];
    for (int i = 0; i < m; ++i)
        arr[i] = new int[n];
    return arr;
}





    

void printarr(int** arr, int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            cout << setw(4) << arr[i][j];
        cout << endl;
    }
}


int sumM(int** arr, int row, int cols)
{
    int sum = 0;
    for (int j = 0; j < cols; j++)
        sum += arr[row][j];
    return sum;
}


int sumN(int** arr, int col, int rows)
{
    int sum = 0;
    for (int i = 0; i < rows; i++)
        sum += arr[i][col];
    return sum;
}








