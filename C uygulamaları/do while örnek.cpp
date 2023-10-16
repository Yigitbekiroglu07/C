#include<stdio.h>
#include<stdlib.h>

	int main(){
	int sayim;
		printf("Bir sayi giriniz");
		scanf("%d",&sayim);
	int i = 1;	
			do {
				
		printf("%d\n",i*sayim);
		i++;		
				
	} while(i<=10);
			
	return 0;
				
	}
