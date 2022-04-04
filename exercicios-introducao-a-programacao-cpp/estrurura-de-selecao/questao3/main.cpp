#include <stdlib.h>
#include <locale.h>
#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "portuguese");

    double x;
    double total;
    int itens;

    cout << "Insira a quantidade de maçãs: " << x;

    if (itens < 12)
    {
        x = 1.30;
        total = x * itens;
        cout << "Total da Compra: " << total << endl;
    }
    else
    {
        x = 1;
        total = x * itens;
        cout << "Total da Compra: " << total << endl;
    }

    return 0;
}
