#include <iostream>
#include <stdio.h>
#include <conio.h>

int main()
{
   int val1, val2,opc, resultado;
   
     while(opc!=7)
     {
     	printf("*********************CALCULADORA DE ISRAEL***************************\n");
     	printf("1.-Suma\n");
     	printf("2.-Resta\n");
     	printf("3.-Multiplicacion\n");
     	printf("4.-Divicion\n");
     	printf("5.-Ingresos\n");
     	printf("6.-Egresos\n");
     	printf("Z.-Salir\n");
     	printf("Selecciona una opcion\n");
     	scanf("%d", &opc);
     	
     	if(opc!=7)
     	{
     		printf("Dame el primer valor");
     		scanf("%d", &val1);
     		printf("Dame el segundo valor");
     		scanf("%d", &val2);
		 }
	 }
	 	printf("Resultado entre val1, val2\n");
}




