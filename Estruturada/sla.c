#include <stdio.h>
#include <stdlib.h>
#include "conio2.h"

int main(){
    int L, C;
for(L=1; L<78; L++){
        gotoxy(L,1);
        textcolor(12);
        printf("%c", 3);
        gotoxy(L,24);
        printf("%c", 3);

    }

    for(c=1; c<24; c++){
        gotoxy(1,C);
        textcolor(12);
        printf("%c", 3);
        gotoxy(78,C);
        printf("%c", 3);
    }
    gotoxy(30,12); textcolor(5);
    printf("Bom dia");
    getch();
}
