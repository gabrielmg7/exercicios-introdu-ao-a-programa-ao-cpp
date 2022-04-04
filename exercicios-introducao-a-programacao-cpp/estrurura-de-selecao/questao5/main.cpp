#include <stdlib.h>
#include <locale.h>
#include <ctime>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "portuguese");

    // recebe a data atual do sistema
    time_t ti = time(NULL);
    // transformando em struct
    tm *datePtr = localtime(&ti);

    cout << "Data: " << (datePtr->tm_mday) << "/" << (datePtr->tm_mon) + 1 << "/" << (datePtr->tm_year) + 1900 << endl;
    int dataNasc=0, idade=0, dia=0, mes=0, ano=0;

    cout << "Insira a sua data de Nascimento: ";
    
    idade = (datePtr->tm_year - ano);
    
    if (idade < 16)
    {
        cout << "Você não tem idade para votar!" << endl;
    }
    else
    {
        cout << "Vote com consciência!" << endl;
    }

    system("pause");
    return 0;
}
