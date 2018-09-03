#include <stdio.h>


int main(){
int opcion,entrada, f, c ;
int matriz[5][5];
int primera=5, centro=3.50, ultima=2.50;
do{

printf("menu\n");
printf("1.Vender entradas\n");
printf("2.verificar el asiento\n");
printf("3.mostrar las ganancias\n");
printf("Escriba una opcion \n");
scanf("%d",opcion);
switch(opcion){
	

	
	do{
	printf(" cual entrada desea comprar \n? 1.primera fila\n 2.filas del centro\n 3.filas del final ");
	scanf("%d",entrada);
	switch(entrada){
	
	case 1:
		
		for(f=0;f<5;f++){
		for(c=0;c<5;c++){
		
		matriz[f][c]+=primera;
		printf("%d",matriz[f][c]);
		
		}
	}
	break;
		
		
	}
	}while(entrada>0 && entrada<4);
 	
	break;
	
	
	
	case 2:
	break;
	
	
	case 3:
	
	for(f=0;f<5;f++){
		for(c=0;c<5;c++){
		
		printf("%d",matriz[f][c]);
		
		}
	}
	
	break;

	



}

} while(opcion>0 && opcion<4);

}
