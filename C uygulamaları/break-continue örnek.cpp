#include<stdio.h>
#include<stdlib.h>
//birden d�rde kadar bast�r be�i atla, 8'de bitir.
	int main(){
	
	int i;
	
	for(i=1; i<10; i++){
		if(i==5)
		{
			continue;
		}
 		if(i==9)
		{
			break;
		}
		printf("%d\n",i);
	}
}
