#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a=0;
    printf("Ingrese el dia de forma numerica (1-7): ");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        puts("Lunes");
        break;
    case 2:
        puts("Martes");
        break;
    case 3:
        puts("Miercoles");
        break;
    case 4:
        puts("Jueves");
        break;
    case 5:
        puts("Viernes");
        break;
    case 6:
        puts("Sabado");
        break;
    case 7:
        puts("Domingo");
        break;
    default:
        puts("Error");
        break;
    }
    return 0;
}