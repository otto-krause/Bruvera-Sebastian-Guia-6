#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a=0, b=0;
    printf("Inserte su dia de nacimiento: ");
    scanf("%d", &a);
    printf("Inserte su mes de nacimiento de forma numerica (1-12): ");
    scanf("%d", &b);
    switch (b)
    {
    case 1:
        if (a>=1&&a<=19)
        {
            printf("Usted es capricornio");
        }
        else
        {
            if (a>=20&&a<=31)
            {
                printf("Usted es acuario");
            }
            else
            {
                printf("Error");
            }
        }
        break;
    case 2:
        if (a>=1&&a<=18)
        {
            printf("Usted es acuario");
        }
        else
        {
            if (a>=19&&a<=28)
            {
                printf("Usted es piscis");
            }
            else
            {
                printf("Error");
            }
        }
        break;
    case 3:
        if (a>=1&&a<=20)
        {
            printf("Usted es piscis");
        }
        else
        {
            if (a>=21&&a<=31)
            {
                printf("Usted es aries");
            }
            else
            {
                printf("Error");
            }
        }
        break;
    case 4:
        if (a>=1&&a<=19)
        {
            printf("Usted es aries");
        }
        else
        {
            if (a>=20&&a<=30)
            {
                printf("Usted es tauro");
            }
            else
            {
                printf("Error");
            }
        }
        break;
    case 5:
        if (a>=1&&a<=20)
        {
            printf("Usted es tauro");
        }
        else
        {
            if (a>=21&&a<=31)
            {
                printf("Usted es geminis");
            }
            else
            {
                printf("Error");
            }
        }
        break;
    case 6:
        if (a>=1&&a<=20)
        {
            printf("Usted es geminis");
        }
        else
        {
            if (a>=21&&a<=30)
            {
                printf("Usted es cancer");
            }
            else
            {
                printf("Error");
            }
        }
        break;
    case 7:
        if (a>=1&&a<=22)
        {
            printf("Usted es cancer");
        }
        else
        {
            if (a>=23&&a<=31)
            {
                printf("Usted es leo");
            }
            else
            {
                printf("Error");
            }
        }
        break;
    case 8:
        if (a>=1&&a<=22)
        {
            printf("Usted es leo");
        }
        else
        {
            if (a>=23&&a<=31)
            {
                printf("Usted es virgo");
            }
            else
            {
                printf("Error");
            }
        }
        break;
    case 9:
        if (a>=1&&a<=22)
        {
            printf("Usted es virgo");
        }
        else
        {
            if (a>=23&&a<=30)
            {
                printf("Usted es libra");
            }
            else
            {
                printf("Error");
            }
        }
        break;
    case 10:
        if (a>=1&&a<=22)
        {
            printf("Usted es libra");
        }
        else
        {
            if (a>=23&&a<=31)
            {
                printf("Usted es escorpio");
            }
            else
            {
                printf("Error");
            }
        }
        break;
    case 11:
        if (a>=1&&a<=21)
        {
            printf("Usted es escorpio");
        }
        else
        {
            if (a>=22&&a<=30)
            {
                printf("Usted es sagitario");
            }
            else
            {
                printf("Error");
            }
        }
        break;
    case 12:
        if (a>=1&&a<=21)
        {
            printf("Usted es sagitario");
        }
        else
        {
            if (a>=22&&a<=31)
            {
                printf("Usted es capricornio");
            }
            else
            {
                printf("Error");
            }
        }
        break;
    default:
        puts("Error");
        break;
    }
    return 0;
}