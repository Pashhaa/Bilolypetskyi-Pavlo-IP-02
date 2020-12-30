#include <iostream>
#include <ctime>

using namespace std;

int maxA(int n, int* arrA);
int maxB(int n, int* arrB);
int evklid(int a, int b);
int c(int n, int mult, int* arrC);

int main()
{
    srand(time(NULL));
    int n;
    cout << "Enter n ";
    cin >> n;
    int* arrA = new int[n];
    int* arrB = new int[n];
    int* arrC = new int[n];

    int p = maxA(n, arrA);
    int q = maxB(n, arrB);
    int l = p * q;


    int NSD = evklid(p, q);
    cout << "NSD: " << NSD << endl;
    int mult = evklid(p, q) * l;
    cout << "Dobutok: " << mult << endl;
    cout << c(n, mult, arrC) << endl;

    return 0;
}
int maxA(int n, int* arrA)
{
    for (int i = 0; i < n; i++)
    {
        arrA[i] = rand() % 50;
    }

    cout << "Array A: ";
    for (int i = 0; i < n; i++)
    {
        cout << arrA[i] << "|";
    }
    cout << endl;
    int maxvalA = arrA[0];
    for (int i = 1; i < n; i++)
    {
        if (arrA[i] > maxvalA)
        {
            maxvalA = arrA[i];
        }
    }
    cout << "Max value of array A: " << maxvalA << endl << endl;
    return maxvalA;

}

int maxB(int n, int* arrB)
{
    for (int i = 0; i < n; i++)
    {
        arrB[i] = rand() % 50;
    }

    cout << "Array B: ";
    for (int i = 0; i < n; i++)
    {
        cout << arrB[i] << "|";
    }
    cout << endl;
    int maxvalB = arrB[0];
    for (int i = 1; i < n; i++)
    {
        if (arrB[i] > maxvalB)
        {
            maxvalB = arrB[i];
        }
    }
    cout << "Max value of array B: " << maxvalB << endl << endl;
    return maxvalB;

}


int evklid(int a, int b)
{
    if (b == 0) return a;
    else return evklid(b, a % b);
}


int c(int n, int mult, int* arrC)
{
    for (int i = 0; i < n; i++)
    {
        arrC[i] = mult;
    }
    cout << "ArrayC: ";
    for (int i = 1; i < n; i++)
    {
        cout << arrC[i] << "|";
    }

    return *arrC;
}

