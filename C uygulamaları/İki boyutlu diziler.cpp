#include<stdio.h>
#include<stdlib.h>
int main(){
	
	
	int dizi1[2][2]={{1,3},{4,6}};
	int dizi2[2][2]={{0,5},{7,8}};
	int toplam[2][2];
	int i,j;
	
		for(i=0;i<2;i++)
		{	
			for(j=0;j<2;j++)
			{
				
				toplam[i][j]=dizi1[i][j]+dizi2[i][j];
			}
		}
			
			
		for(i=0;i<2;i++)
		{
			
			for(j=0;j<2;j++)
			{
				
				printf("%4d",toplam[i][j]);
			}
				printf("\n");
		}
		
		return 0;
}
