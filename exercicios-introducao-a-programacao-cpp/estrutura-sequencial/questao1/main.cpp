


#include <iostream>
using namespace std;
int main()
{
    char c;
    double L = 0,
           C = 0,
           area = 0,
           P = 0;

    cout << "Digite a largura: " << endl;
    cin >> L;

    cout << "Digite o comprimento: " << endl;
    cin >> C;

    area = L * C;
    cout << "A área da sala é: " << area << endl;

    for (char ch = 'n'; ch != 's'; scanf("%c", &ch))
    {
        printf("Sair? ");
        rewind(stdin);
    }
}