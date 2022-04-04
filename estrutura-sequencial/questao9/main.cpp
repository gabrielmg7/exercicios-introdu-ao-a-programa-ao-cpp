#include <iostream>
#include <locale.h> 

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");

	float a = 0, b = 0, c = 0;

	cout << "lado A: ";
	cin >> a;
	cout << "lado B: ";
	cin >> b;
	cout << "lado C: ";
	cin >> c;

	if ((a < b + c) && (b < a + c) && (c < a + b))
	{
		if ((a == b) && (a == c))
		{
			cout << "Seu Triângulo é o Equilátero.\n\n";
		}
		else if ((a == b) || (a == c) || (b == c))
		{
			cout << "Seu Triângulo é o Isóceles.\n\n";
		}
		else
		{
			cout << "Seu Triângulo é o Escaleno.\n\n";
		}

		system("pause");
	}
	return '0';
}
