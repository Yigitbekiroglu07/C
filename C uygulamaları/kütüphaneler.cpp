#include<stdio.h>
#include<stdlib.h>
#include<string.h>

	int main(){
		int sonuc;
		int x;
		char dizi3[100];
		char dizi4[100];
		char bos[100];
		char yigit[]="Kasim";
		char dizi1[]="a";
		char dizi2[]="A";
		sonuc=strcmp(dizi1,dizi2);
		char can[]= "Benim adim canan";
		char canan[17]="";
	//strcpy i�lemi atamaya yarar.
	//strncpy i�lemi a�a��daki gibidir. char canan'�n yan�na e�ittir koyup bir ifade yazmal�y�z C'nin buglar�ndan biri. yaz�lmazsa hata verir.
		strncpy(canan,can,7);
		printf("%s\n",canan);
		
		printf("Dizi boyutu = %d\n",strlen(yigit));
	//Size of yaparsak sondaki "\0"	dahil eder ve 6 karakterli hesaplar.
		printf("Dizi boyutu = %d\n",sizeof(yigit));
	//�ki diziyi kar��la�t�rma i�lemi strcmp ile yap�l�r
	//strncmp belli  bir karaktere kadar k�yaslama yapmaya yarar. Di�er her �ey strcmp ile ayn�, tek fark sonuc k�sm�na dizi2 yan�na virg�l at�p ka� karakter k�yaslamak istiyorsak o rakam� yazmal�y�z.

			if(sonuc>0)
				{
					printf("dizi 1 dizi 2 den buyuktur\n",sonuc);
				}
			
			else if(sonuc<0)
				{
					printf("dizi 2 dizi 1 den buyuktur",sonuc);
				}
			
			else
				{
					printf("iki dizi birbirine esittir",sonuc);
				}
	//strcat iki karakter dizisini birle�tirir.
			strcpy(bos,"Benim");
			strcat(bos," adim");
			strcat(bos," Yigit\n");
			printf("%s",bos);
	//strncat iki diziden ikinci diziden birincisie ka� karakter atayaca��m�z yapt�r�r.
	
			printf("Lutfen bir karakter giriniz\n");
			scanf("%s",&dizi3);
			printf("Lutfen ikinci karakteri giriniz\n");
			scanf("%s",&dizi4);
			printf("Birinci karakter sonuna eklenecek harf sayisi\n");
			scanf("%d",&x);
			printf("olusan kelime = %s\n",strncat(dizi3,dizi4,x));
			
			return 0;
	
}
