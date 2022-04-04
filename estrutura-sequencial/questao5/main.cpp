
#include <locale.h>
#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    double PAG = 0, PR = 0, D = 0;
    cout << "Informe o preço do produto: ";
    cin >> PR;
    cout << "Informe a porcentagem do desconto: ";
    cin >> D;
    PAG = PR - (PR * D);
    cout << "Valor a ser pago pelo produto: " << PAG << endl;
    return 0;
}