#include <stdlib.h>
#include <locale.h>
#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "portuguese");
    int x = 0;

    cout << "insira um valor: " << x;

    if (x > 10)
    {
        cout << "O número é maior que 10!" << endl;
    }
    else
    {
        cout << "O número é menor que 10!" << endl;
    }
    return 0;
}
