#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	int n, i;
	float a = 2;
	float s = 0;


	cout << "Введiть бажану для обчислення кiлькiсть членiв: ";

	cin >> n;

	if (n < 0)
	{
		cout << "Недопустиме значення n";

	}
	else
	{
	

	for (i = 1; i <= n; i++ )
	{
		a = pow(a, 2) / (a + 3);
		s += a;
		}
	cout << s;
}
	return 0;
}
