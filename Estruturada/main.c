#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    int num, maior, menor;
    char letraMaior, letraMenor;

    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
    WORD saved_attributes;

    GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
    saved_attributes = consoleInfo.wAttributes;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num);

    maior = menor = num;
    letraMaior = letraMenor = 'A';

    printf("Digite o segundo numero: ");
    scanf("%d", &num);

    if (num > maior) {
        maior = num;
        letraMaior = 'B';
    } else if (num < menor) {
        menor = num;
        letraMenor = 'B';
    }

    printf("Digite o terceiro numero: ");
    scanf("%d", &num);

    if (num > maior) {
        maior = num;
        letraMaior = 'C';
    } else if (num < menor) {
        menor = num;
        letraMenor = 'C';
    }

    printf("Digite o quarto numero: ");
    scanf("%d", &num);

    if (num > maior) {
        maior = num;
        letraMaior = 'D';
    } else if (num < menor) {
        menor = num;
        letraMenor = 'D';
    }

    printf("Digite o quinto numero: ");
    scanf("%d", &num);

    if (num > maior) {
        maior = num;
        letraMaior = 'E';
    } else if (num < menor) {
        menor = num;
        letraMenor = 'E';
    }

    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
    printf("\nO maior numero digitado foi o %c, que vale %d.\n", letraMaior, maior);
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
    printf("O menor numero digitado foi o %c, que vale %d.\n", letraMenor, menor);
    SetConsoleTextAttribute(hConsole, saved_attributes);

    system("pause");
    system("cls");

    return 0;
}
