#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a=0;
    printf("Inserte el mes en forma numerica (1-12): ");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        puts("Enero");
        break;
    case 2:
        puts("Febrero");
        break;
    case 3:
        puts("Marzo");
        break;
    case 4:
        puts("Abril");
        break;
    case 5:
        puts("Mayo");
        break;
    case 6:
        puts("Junio");
        break;
    case 7:
        puts("Julio");
        break;
    case 8:
        puts("Agosto");
        break;
    case 9:
        puts("Septiembre");
        break;
    case 10:
        puts("Octubre");
        break;
    case 11:
        puts("Noviembre");
        break;
    case 12:
        puts("Diciembre");
        break;
    default:
        puts("Error");
        break;
    }
    return 0;
}