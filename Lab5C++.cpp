#include <iostream> 
using namespace std;
#include <iomanip>





int main()
{
    
    setlocale(LC_ALL , "rus");
    
    int m, n;
    cout << "Введите m: ";
    cin >> m;
    cout << "Введите n: ";
    cin >> n;
    
    if (m < 0 or n<0)
    {
        cout << "Недопустимое значение!";
        return 0;
    }
   
    if (n > m)
    {
        cout << "Недопустимое значение!";
        return 0;
    }
    
    int *arr = new int[m];
    int sum = 0;
    int k = 0;
    
    cout << "Натуральные числа меньше m:" << endl;

    for (int i = 1; i < m; i++)
    {
        int arr(i);

        cout << arr << "|";

    }



    for (int i = 0; i < m; i++) 
    {
        int arr(i);
        sum = arr / 100 + arr / 10 % 10 + arr % 10;
        if (sum == n) 
        {
            k++;
            
            cout<<endl << k << " => " << arr << " | " << sum << "\n";
        }
    }
    system("pause");
    return 0;
}
