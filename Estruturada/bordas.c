//código errado


#include <stdio.h>
#include <stdlib.h>
#include "conio2.h"

int main() {
    int cont;

    for (cont = 0; cont < 10; cont++) {
        textcolor(cont);
        //gotoxy(30, 12);
        printf("+----------------------+\n");
        printf("|      Bom dia!        |\n");
        printf("+----------------------+\n");
      
    }

    return 0;
}
