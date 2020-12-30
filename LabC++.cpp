#include <iostream>
#include <cmath>

using namespace std;


float f(float x, float y);

float g(float x, float y, float z);

int main()

{
    setlocale(LC_ALL, "rus");
    
    
    float a, b, c, d, res;
    cout << "Enter a ";
    cin >> a;
    cout << "Enter b ";
    cin >> b;
    cout << "Enter c ";
    cin >> c;
    cout << "Enter d ";
    cin >> d;
    
    res = (f(a, b) + f(c, d) / sqrt(g(a, b, c))) + ((c-g(a, b, c)+1)/f(b, c) - f(a, b))*(1+(g(a, b, c)/(f(b, c)-f(a, c))));
   
    cout << res;

    return 0;
}

x   
float f(float x, float y)
{
    float funres;

    funres=pow(x, 2) - pow(y, 2);
    
    return funres;
}

float g(float x, float y, float z)
{
    float funres;

    funres = (x + y) / (4 * z * x);

    return funres;
}