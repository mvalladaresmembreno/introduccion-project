#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#include "work.h"

int main (void)
{
    int val,ele;
    char eleccion[10];
    limpia_pantalla();

    printf("Escoja uno de los ejercicios que decida revisar");
    printf("\n1) 2) 3) 4) 5)\n 6) 7) 8) 9) 10)\n11) 12) 13) 14) 15)\n 16) 17) 18) 19) 20)\n");
    system("pause");

    while(val==0)
    {
        system("cls");
        printf("Ingrese el numero del ejercicio : ");
        gets(eleccion);
        val=validacion_num(eleccion);
        if(val==0)
        {
            animacion_error();
            system("pause");
        }
    }
    ele=atoi(eleccion);

    switch (ele)
    {
        case 1:
            ejercicio_1();
        break;

        case 2:
            ejercicio_2();
        break;

        case 3:
            ejercicio_3();
        break;

        case 4:
            ejercicio_4();
        break;

        case 5:
            ejercicio_5();
        break;

        case 6:
            ejercicio_6();
        break;

        case 7:
            ejercicio_7();
        break;

        case 8:
            ejercicio_8();
        break;

        case 9:
            ejercicio_9();
        break;

        case 10:
            ejercicio_10();
        break;

        case 11:
            ejercicio_11();
        break;

        case 12:
            ejercicio_12();
        break;

        case 13:
            ejercicio_13();
        break;

        case 14:
            ejercicio_14();
        break;

        case 15:
            ejercicio_15();
        break;

        case 16:
            ejercicio_16();
        break;

        case 17:
            ejercicio_17();
        break;

        case 18:
            ejercicio_18();
        break;

        case 19:
            ejercicio_19();
        break;

        case 20:
            ejercicio_20();
        break;

        default:
        printf("No nos dejo este ejercicio profe xd");
        break;
    }
}
