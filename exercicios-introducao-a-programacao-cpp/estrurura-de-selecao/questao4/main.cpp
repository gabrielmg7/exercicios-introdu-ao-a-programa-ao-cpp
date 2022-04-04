#include <stdlib.h>
#include <locale.h>

using namespace std;

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "portuguese");
    double av1, av2, media;

    cout << "Insira a nota da avaliação 1: " << av1 << endl;
    cout << "Insira a nota da avaliação 2: " << av2 << endl;
    media = av1 + av2 / 2;
    if (media < 6)
    {
        texcolor(RED);
        cout << "ALUNO REPROVADO!" << endl;
        cout << "Média: " << media;
    }
    else
    {
        textcolor(GREEN);
        cout << "ALUNO APROVADO!" << endl;
        cout << "Média: " << media;
    }
    return 0;
}
