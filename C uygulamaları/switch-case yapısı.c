#include <stdio.h>
#include <stdlib.h>

int main()
{
	int day = 1;
    switch(day)
    {
        case 1:printf("Pazartesi");
        break;
        case 2:printf("Salı");
        break;
        case 3:printf("Çarşamba");
        break;
        case 4:printf("Persembe");
        break;
        case 5:printf("Cuma");
        break;
        case 6:printf("Cumartesi");
        break;
        case 7:printf("Pazar");
        break;
        default :printf("Gecersiz gun");
        break;
    } return 0;
}

 /*   if(day==1)
    {
        printf("Pazartesi");
    }
    else if(day==2)
    {
        printf("Sali");
    }
    else if(day==3)
    {
        printf("Çarşamba");
    }
    else if(day==4)
    {
        printf("Persembe");
    }
    else if(day==5)
    {
        printf("Cuma");
    }
    else if(day==6)
    {
        printf("Cumartesi");
    }
    else if(day==7)
    {
        printf("Pazar");
    }
    else
    {
        printf("Boyle bir gun yok");
    }
    return 0;
} */
