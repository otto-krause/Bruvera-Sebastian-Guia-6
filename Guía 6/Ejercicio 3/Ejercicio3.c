#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a=0, b=0;
    printf("Inserte el mes en forma numerica (1-12): ");
    scanf("%d", &a);
    printf("Inserte el año: ");
    scanf("%d", &b);
    switch (a)
    {
    case 1:
        puts("En enero hay 31 dias");
        break;
    case 2:
        if (b%100==0)
        {
            if (b%400==0)
            {
                printf("En febrero hay 29 dias");
            }
            else
            {
                printf("En febrero hay 28 dias");
            }
        }
        else
        {
            if (b%4==0)
            {
                printf("En febrero hay 29 dias");
            }
            else
            {
                printf("En febrero hay 28 dias");
            }
        }
        break;
    case 3:
        puts("En marzo hay 31 dias");
        break;
    case 4:
        puts("En abril hay 30 dias");
        break;
    case 5:
        puts("En mayo hay 31 dias");
        break;
    case 6:
        puts("En junio hay 30 dias");
        break;
    case 7:
        puts("En julio hay 31 dias");
        break;
    case 8:
        puts("En agosto hay 31 dias");
        break;
    case 9:
        puts("En septiembre hay 30 dias");
        break;
    case 10:
        puts("En octubre hay 31 dias");
        break;
    case 11:
        puts("En noviembre hay 30 dias");
        break;
    case 12:
        puts("En diciembre hay 31 dias");
        break;
    default:
        puts("Error");
        break;
    }
    return 0;
}