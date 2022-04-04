#include <stdlib.h>
#include <locale.h>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "portuguese");
    int x;
    cout << "insira um número: " << x;
    if (x > 0)
    {
        cout << "O número é NEGATIVO!" << endl;
    }
    else
    {
        cout << "O número é POSITIVO!" << endl;
    }

    return 0;
}
