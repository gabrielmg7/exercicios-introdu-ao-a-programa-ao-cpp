#include <stdio.h>
#include <locale.h>
#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    double VAL_DOLAR = 0, VAL_REAL = 0, COT = 0;

    cout << "Informe o valor que você possui em dólar: ";
    cin >> VAL_DOLAR;

    cout << "Informe a cotação atual do dólar: ";
    cin >> COT;

    VAL_REAL = VAL_DOLAR * COT;
    cout << "Saldo: R$" << VAL_REAL << endl;

    return 0;
}