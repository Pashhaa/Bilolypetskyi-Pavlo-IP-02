#include <iostream>
#include <math.h>

using namespace std;

int factorial(int b) /*Функція факторіалу*/
{
    int i = 1;
    while (b > 1)
    {
        i *= b;
        b -= 1;
    }
    return i;
}

int main()
{
    setlocale(LC_ALL, "rus");

    float x = 0;
    float ε = pow(10, -5);
    float an = 0;
    float sum = 0;
    int n;
    cout << "Enter: (х) "; /*Цикл обчислення суми*/
    cin >> x;
    for (n = 0; n < 10 || an >= ε;)
    {
        float a;
        n = n + 1;
        a = 2 * n;
      

        an = pow(x, n) / factorial(a);

        sum += an;

        cout << sum << '\n';
    }
    return 0;
}
