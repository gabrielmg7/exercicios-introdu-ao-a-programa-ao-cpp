

#include <stdio.h>
#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");

	double D = 0, PR = 0;
	cout << "Insira o preço do produto: ";
	cin >> PR;

	D = PR * 0.05;
	cout << "O valor do desconto é de " << D << " reais!";
}