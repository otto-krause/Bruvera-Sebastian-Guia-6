#include<stdio.h>
#include<stdlib.h>

int main()
{
    char a;
    printf("Inserte su calificacion (A-F): ");
    a=getchar();
    switch (a)
    {
    case 'a':
    case 'A':
        puts("Excelente.");
        break;
    case 'b':
    case 'B':
        puts("Buena.");
        break;
    case 'c':
    case 'C':
        puts("Regular.");
        break;
    case 'd':
    case 'D':
        puts("Sueficiente.");
        break;
    case 'f':
    case 'F':
        puts("No suficiente.");
        break;
    default:
        puts("Error");
        break;
    }
    return 0;
}