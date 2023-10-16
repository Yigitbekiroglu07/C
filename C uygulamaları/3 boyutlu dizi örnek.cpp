#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Kullanıcıdan 2 adet 3 e 2 lik matris  değerlerini alınız bunları bir 3 boyutlu sayı dizisine
    //atayınız hangi indexte hangi değer var bunları consola bastırınız

    int can[2][3][2];
    int i,j,k;

    printf("Lutfen 12 adet deger giriniz\n");

    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=0;k<2;k++)
            {
                scanf("%d",&can[i][j][k]);
            }
        }
    }

    printf("Girdiginiz Degerler");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=0;k<2;k++)
            {
               printf("can[%d][%d][%d] = %d\n",i,j,k,can[i][j][k]);
            }
        }
    }

    return 0;
}
